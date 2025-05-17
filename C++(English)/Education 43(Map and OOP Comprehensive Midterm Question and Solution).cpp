#include <iostream>
#include <map>
#include <string>
using namespace std;

class Book {
public:
    string bookTitle;
    string authorName;
    int shelfNo;

    Book() {
        bookTitle = "";
        authorName = "";
        shelfNo = 0;
    }

    Book(string bookTitle, string authorName, int shelfNo) {
        this->bookTitle = bookTitle;
        this->authorName = authorName;
        this->shelfNo = shelfNo;
    }
};

void listBooks(const map<int, Book>& library) {
    if (library.empty()) {
        cout << "\nNo books are currently registered in the library!\n";
        return;
    }

    cout << "\n* * * * Books in the Library: * * * *\n";

    for (const auto& bookPair : library) {
        cout << "Book ID: " << bookPair.first
            << ", Title: " << bookPair.second.bookTitle
            << ", Author: " << bookPair.second.authorName
            << ", Shelf No: " << bookPair.second.shelfNo << endl;
    }
}

int main() {
    map<int, Book> library;
    int choice;

    do {
        // Menu
        cout << "\n==== Library Management System ====\n";
        cout << "1. Add Book\n";
        cout << "2. View Book Details\n";
        cout << "3. Delete Book\n";
        cout << "4. List All Books\n";
        cout << "5. Exit\n";
        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Add Book
            int bookID;
            string bookTitle, authorName;
            int shelfNo;
            cout << "\nBook ID: ";
            cin >> bookID;
            cin.ignore();   // Cleans up new line character when using cin and getline together
            cout << "Book Title: ";
            getline(cin, bookTitle);
            cout << "Author Name: ";
            getline(cin, authorName);
            cout << "Shelf No: ";
            cin >> shelfNo;
            library[bookID] = Book(bookTitle, authorName, shelfNo);
            cout << "Book successfully added..\n";
            break;
        }
        case 2: {
            // View Book Details
            int bookID;
            cout << "\nEnter the Book ID to view details: ";
            cin >> bookID;
            auto it = library.find(bookID);
            if (it != library.end()) {
                // Book found
                const Book& book = it->second;
                cout << "Title: " << book.bookTitle << ", Author: " << book.authorName << ", Shelf No: "
                    << book.shelfNo << endl;
            }
            else {
                // Book not found
                cout << "Book not found!\n";
            }
            break;
        }
        case 3: {
            // Delete Book
            int bookID;
            cout << "\nEnter the Book ID to delete: ";
            cin >> bookID;
            if (library.erase(bookID)) {
                cout << "Book successfully deleted.\n";
                listBooks(library);
            }
            else {
                cout << "Book not found!\n";
            }
            break;
        }
        case 4: {
            // List all books
            listBooks(library);
            break;
        }
        case 5:
            cout << "\nExiting, goodbye...\n";
            break;
        default:
            cout << "\nInvalid selection, please enter a value between 1-5..\n";
        }

    } while (choice != 5);

    return 0;
}

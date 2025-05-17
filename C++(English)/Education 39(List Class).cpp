#include <iostream>
#include <list>
using namespace std;

// Function to print the elements of a list
void printList(list<int> l) {
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";  // Print the element
    }
    cout << endl;
}

// Function to remove the 3rd indexed element from the list
void removeElement(list<int>& l) {  // List is passed by reference to modify the original list
    list<int>::iterator it = l.begin();
    advance(it, 3);  // Move forward 3 steps (3rd index element)
    l.erase(it);     // Remove the element
}

int main() {
    list<int> lst;

    // Adding elements to the list
    lst.push_back(5);    // [5]
    lst.push_back(8);    // [5, 8]
    lst.push_front(3);   // [3, 5, 8]
    printList(lst);      // Output: 3 5 8

    // Removing the first element of the list
    lst.pop_front();     // [5, 8]
    printList(lst);      // Output: 5 8

    // Move iterator to the second element and insert 9 there
    list<int>::iterator it = lst.begin();
    it++;
    it++;                // Now at end()
    lst.insert(it, 9);   // 9 is inserted before end() => [5, 8, 9]
    printList(lst);      // Output: 5 8 9

    // Insert two 7s at the second position => [5, 7, 7, 8, 9]
    it = lst.begin();
    it++;
    lst.insert(it, 2, 7);
    printList(lst);      // Output: 5 7 7 8 9

    // Remove the element at index 3 (7) => [5, 7, 7, 8, 9] -> [5, 7, 7, 9]
    removeElement(lst);
    printList(lst);      // Output: 5 7 7 9

    return 0;
}

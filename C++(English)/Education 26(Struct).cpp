#include <iostream>
#include <string>
using namespace std;

// Struct Definition
/*
// Struct Definition 1
struct Point
{
	// member variables
	int x;
	int y;
};

struct Rectangle
{
	double width;
	double height;
};


int main()
{
	Point pt;
	pt.x = 10;
	pt.y = 20;

	Point pt2;
	pt2.x = 50;
	pt2.y = 70;

	Rectangle rect1;
	rect1.width = 10.2;
	rect1.height = 5.5;

	cout << "pt => x : " << pt.x << "pt => y :" << pt.y << endl;
	cout << "pt2 => x : " << pt2.x << "pt2 => y :" << pt2.y << endl;
	cout << "rect1 => w : " << rect1.width << "rect1 => h :" << rect1.height << endl;
	return 0;
}

// Struct Definition 2
struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

int main()
{
	Student student1;
	// Method 1
	student1.studentNo = 100;
	student1.name = "Cavit Batu Soylu";
	student1.gradeAverage = 87.5;

	// Method 2
	Student student2 = { 102,"Cavit Batu Soylu", 90.5 };

	cout << "Std1 : " << student1.studentNo << " " << student1.name << " " << student1.gradeAverage << endl;
	cout << "Std2 : " << student2.studentNo << " " << student2.name << " " << student2.gradeAverage << endl;

	return 0;
}
*/

// Struct Arrays
/*
#include <string>

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

int main()
{
	Student students[3];

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ".student's number: ";
		cin >> students[i].studentNo;
		cin.ignore(); // To clear the newline character

		cout << i + 1 << ".student's name: ";
		getline(cin, students[i].name);

		cout << i + 1 << "student's grade average: ";
		cin >> students[i].gradeAverage;
	}

	cout << "\n** * Student List * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].studentNo << " " << students[i].name << " " <<
				students[i].gradeAverage << endl;
	}

	return 0;
}
*/

// Structs with Functions
/*
#include <string>
using namespace std;

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

void printStudentStatus(Student &std)
{
	std.studentNo = 190;
	if (std.gradeAverage < 50)
	{
		cout << std.name << " failed the class!\n";
	}
	else
	{
		cout << std.name << " passed the class, congratulations!\n";
	}
}

int main()
{
	Student student1 = { 101,"Cavit Batu Soylu",60.5 };
	printStudentStatus(student1);
	cout << "Student name: " << student1.name << " student no: " << student1.studentNo << endl;

	return 0;
}
*/

// Passing Struct Arrays as Parameters to Functions
/*
#include <string>
using namespace std;

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

// Print status for a single student
void printStudentStatus(Student& std)
{
	std.studentNo = 190;
	if (std.gradeAverage < 50)
	{
		cout << std.name << " failed the class!\n";
	}
	else
	{
		cout << std.name << " passed the class, congratulations!\n";
	}
}

// Print status for all students
void printAllStudentsStatus(Student students[], int size)
{
	cout << "\n** * Student Statuses * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].studentNo << " " <<
			students[i].name << " " <<
			students[i].gradeAverage << " ";

		printStudentStatus(students[i]);
	}

}

int main()
{
	Student students[3] = {
	{ 101,"Cavit Batu Soylu",80.5 },
	{ 102,"Kazim Mert Karaca",70.5 },
	{ 103,"Fatoþ Yilmaz",75.5 }
	};

	printAllStudentsStatus(students, 3);

	return 0;
}
*/

// Using Structs and Pointers
/*
#include <string>
using namespace std;

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

// Print status for a single student
void printStudentStatus(Student& std)
{
	std.studentNo = 190;
	if (std.gradeAverage < 50)
	{
		cout << std.name << " failed the class!\n";
	}
	else
	{
		cout << std.name << " passed the class, congratulations!\n";
	}
}

// Print status for all students
void printAllStudentsStatus(Student students[], int size)
{
	cout << "\n* * Student Statuses * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].studentNo << " " <<
			students[i].name << " " <<
			students[i].gradeAverage << " ";

		printStudentStatus(students[i]);
	}

}

int main()
{
	Student student1 = { 101,"Cavit Batu Soylu",85.0 };
	Student	*ptr = &student1;

	cout << "Student No: " << ptr->studentNo <<
			"Name: " << ptr->name <<
			"Grade average: " << ptr->gradeAverage << endl;

	Student student2 = { 102,"Kazým Mert Karaca",65.0 };
	Student* ptr2 = &student2;

	cout << "Student No: " << ptr2->studentNo <<
			"Name: " << ptr2->name <<
			"Grade average: " << ptr2->gradeAverage << endl;

	return 0;
}
*/

// Structs and Dynamic Memory Management
/*
#include <string>
using namespace std;

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

// Print status for a single student
void printStudentStatus(Student& std)
{
	std.studentNo = 190;
	if (std.gradeAverage < 50)
	{
		cout << std.name << " failed the class!\n";
	}
	else
	{
		cout << std.name << " passed the class, congratulations!\n";
	}
}

// Print status for all students
void printAllStudentsStatus(Student students[], int size)
{
	cout << "\n* * Student Statuses * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].studentNo << " " <<
			students[i].name << " " <<
			students[i].gradeAverage << " ";

		printStudentStatus(students[i]);
	}

}

int main()
{
	Student* ptr = new Student;

	cout << "Student No: ";
	cin >> ptr->studentNo;
	cin.ignore(); // To prevent newline error

	cout << "Name: ";
	getline(cin, ptr->name);

	cout << "Grade Average: ";
	cin >> ptr->gradeAverage;

	cout << ptr->studentNo << " " << ptr->name << " " << ptr->gradeAverage << endl;

	delete ptr;

	return 0;
}
*/

// Using Struct Arrays with Pointers (Advanced)
/*
#include <string>
using namespace std;

struct Student
{
	int studentNo;
	string name;
	double gradeAverage;
};

int main()
{
	int n;

	cout << "How many students will be recorded? : ";
	cin >> n;
	cin.ignore();

	// Create Student Array on Heap Memory
	Student *students = new Student[n];

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Student No: ";
		cin >> students[i].studentNo;
		cin.ignore();

		cout << "Name: ";
		getline(cin, students[i].name);

		cout << "Grade average: ";
		cin >> students[i].gradeAverage;
	}

	cout << "\nStudent Information:\n";
	for (int i = 0; i < n; i++)
	{
		cout << students[i].studentNo << " "
			<< students[i].name << " "
			<< students[i].gradeAverage << endl;
	}

	delete[] students;
	return 0;
}
*/

// Struct Programming Questions
/*
// Struct Programming Question #1 (Deep Copy)

#include <iostream>
using namespace std;

struct Student {
	int studentNo;
	string name;
};

void printInfo(Student std) {
	cout << "Student No: " << std.studentNo << ", Name: " << std.name << endl;
}

int main() {
	Student student1 = {101, "Ahmet"};
	Student student2 = student1;

	student2.studentNo = 102;
	student2.name = "Mehmet";

	printInfo(student1);
	printInfo(student2);

	return 0;
}


// Struct Programming Question #2 (Shallow Copy)

#include <iostream>
#include <string>

using namespace std;

struct Student {
	int studentNo;
	string name;
};

void printInfo(Student* std) {
	cout << "Student No: " << std->studentNo << ", Name: " << std->name << endl;
}

int main() {
	// Two students are created from dynamic memory
	Student* pstudent1 = new Student;
	Student* pstudent2 = new Student;

	// Value assignments
	pstudent1->studentNo = 101;
	pstudent1->name = "Ahmet";

	pstudent2 = pstudent1;

	pstudent2->studentNo = 102;
	pstudent2->name = "Mehmet";

	printInfo(pstudent1);
	printInfo(pstudent2);

	// Memory cleanup
	delete pstudent1;
	delete pstudent2;

	return 0;
}

// Struct Programming Question #2 (Shallow Copy) (Extra Info)

struct Student {
	int studentNo;
	string name;
};

void printInfo(Student* std) {
	cout << "Student No: " << std->studentNo << ", Name: " << std->name << endl;
}

int main() {
	// Two students are created from dynamic memory
	Student* pstudent1 = new Student;
	Student* pstudent2 = new Student;

	// Value assignments
	pstudent1->studentNo = 101;
	pstudent1->name = "Ahmet";
	// Student *pTemp = pstudent2; // Method 1
	// delete pstudent2; // Method 2
	pstudent2 = pstudent1;

	pstudent2->studentNo = 102;
	pstudent2->name = "Mehmet";

	printInfo(pstudent1);
	printInfo(pstudent2);

	// Memory cleanup
	delete pstudent1;
	//delete pTemp; // Method 1
	//delete pstudent2; // Method 2 (Delete this line)

	return 0;
}
*/

//----------------------------------------------------------------------------------------------

// C++ STRUCT-PART 2: USING STRUCTS LIKE CLASSES (CHAPTER 29)

// C++ Structs with Constructor and Member Function
/*
struct Person {
	// Member variables (public by default)
	string name;
	int age;

	// Parameterized Constructor
	Person(const string& n, int ag) {
		name = n;
		age = ag;
	}

	// Member function
	void printInfo() {
		cout << "Name: " << name << " Age: " << age << endl;
	}
};

int main() {
	Person p("Ali", 25);
	p.printInfo();

	// struct: Members are directly accessible (public)

	p.age = 35;
	p.printInfo();

	return 0;
}
*/

// Using Private in C++ Structs and a Simple GetterSetter
/*
struct BankAccount{
private:
	double balance; // should not be directly accessible from outside

public:
	//Constructor
	BankAccount(double initialBalance) {
		balance = initialBalance;
		cout << "Account created\n";
	}

	// Destructor
	~BankAccount() {
		cout << "Account closed." << endl;
	}

	// Getter
	double getBalance() {
		return balance;
	}

	// Setter-like deposit method
	void deposit(double amount) {
		balance += amount;
	}

	// Withdrawal
	void withdraw(double amount) {
		balance -= amount;
	}

};

int main() {
	//Normal Version
	BankAccount myAccount(1000);

	cout << "Current Balance = " << myAccount.getBalance() << endl;

	myAccount.deposit(500.0);
	cout << "Current balance after deposit = " << myAccount.getBalance() << endl;

	myAccount.withdraw(300.0);
	cout << "Current balance after withdrawal = " << myAccount.getBalance() << endl;

//----------------------------------------------------------------------------------------------
	// Pointer version
	BankAccount* pAccount = new BankAccount(1000);

	cout << "Current Balance = " << pAccount->getBalance() << endl;

	pAccount->deposit(500.0);
	cout << "Balance after deposit = " << pAccount->getBalance() << endl;

	pAccount->withdraw(300.0);
	cout << "Balance after withdrawal = " << pAccount->getBalance() << endl;

	delete pAccount; // Destructor is automatically called

	return 0;
}
*/

// C++ Struct Example Exam Question and Solution
/*

		C++ CODE REVIEW AND COMMENT QUESTION

	Review the following code and answer the questions.
	1. Compilability:
	Do you get any compilation errors when you compile the following code? Explain with the reason.

	2. If the following line is uncommented, what kind of error will the code give? (compile-time or run-time) Why?

	3. If the program can be run without errors, what will it print to the screen?
	4. If the word "struct" was written as "class" in the following code, would the output change?

#include <iostream>
#include <string>
using namespace std;

struct Person {
private:
	string name;
	int age;

public:
	// Constructor function
	Person(string n, int a) {
		name = n;
		age = a;
	}

	void introduce() const {
		cout << "Name = " << name << ", Age = " << age << endl;
	}

	// Method to set the age
	void setAge(int newAge) {
		if (newAge >= 0)
		{
			age = newAge;
		}
	}
};

int main(){
	Person person1("Ali", 20);
	person1.introduce();

	// Attention: If we want to access the age field directly...
	// person1.age = 25; // What happens in this line? Why?

	person1.setAge(25);
	person1.introduce();
}
*/
#include <iostream>
using namespace std;

// Base Class
class Animal {

public:
	virtual void makeSound() {
		cout << "Animal makeSound function called\n\n";
	}

	void print() {
		cout << "Animal class print method called\n";
	}
};

// Child Class: Cat
class Cat : public Animal {

public:
	void makeSound() {
		cout << "Meow Meow..\n";
	}

	void print() {
		cout << "Cat class print called\n";
	}

};

// Child Class: Dog
class Dog : public Animal {

public:
	void makeSound() {
		cout << "Woof Woof..\n";
	}

	void print() {
		cout << "Dog class print called\n";
	}

};

void makeSoundThreeTimes(Animal* animal) {
	for (int i = 0; i < 3; i++)
	{
		animal->makeSound();
	}
}

int main() {
	Animal* pAnimal;
	Cat tabby;
	pAnimal = &tabby;
	// pAnimal->makeSound();

	// pAnimal->print();

	Dog blacky;
	pAnimal = &blacky;
	// pAnimal->makeSound();
	blacky.print();

	makeSoundThreeTimes(pAnimal);

	Dog blacky2;
	makeSoundThreeTimes(&blacky2);

	Cat tabby2;
	makeSoundThreeTimes(&tabby2);
}
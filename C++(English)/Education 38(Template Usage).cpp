#include <iostream>
using namespace std;

/*
    C++ TEMPLATE

    Templates allow functions or classes in C++ to work with different data types.
    This means that, without rewriting the same code, we can use it for int, double, string, etc.
*/

// TEMPLATE USAGE
/*
template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
class Square {
private:
    T side;
public:
    Square(T length) {
        side = length;
    }

    T area() {
        return side * side;
    }

    void show() {
        cout << "Side length: " << side << endl;
    }
};

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <typename T>
class Rectangle {
private:
    T width;
    T height;
public:
    Rectangle(T w, T h) {
        width = w;
        height = h;
    }

    T area() {
        return width * height;
    }

    void show() {
        cout << "Width length = " << width << endl;
    }
};

int main() {
    cout << add(3, 5) << endl;
    cout << add(string("Hello "), string("World")) << endl;

    Square<int> s1(5); /// A square with int type
    Square<double> s2(4.5); // A square with double type

    s1.show();
    cout << "s1 Area = " << s1.area() << endl;

    s2.show();
    cout << "s2 Area = " << s2.area() << endl;

    Rectangle<int> r1(5, 10);
    Rectangle<double> r2(4.5, 7.2);

    r1.show();
    cout << "r1 Area: " << r1.area() << endl;

    r2.show();
    cout << "r2 Area: " << r2.area() << endl;

    cout << subtract(10.5, 7.1) << endl;

    return 0;
}
*/

// PROFESSIONAL TEMPLATE USAGE
/*
Using uniform_int_distribution to Generate Random Numbers

- Random numbers generated with rand() are not perfectly evenly distributed.
- Sometimes a certain number may appear frequently, while another never appears.
- uniform_int_distribution ensures statistically equal probability distribution.
- In large-scale projects (games, simulations, artificial intelligence), uniform_int_distribution is preferred for professional use.

#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd; // Real randomness source (hardware-based)
    mt19937 engine(rd()); // Random number generation engine (Mersenne Twister Algorithm)

    uniform_real_distribution<double> distribution(0.0, 1.0); // Generate decimal numbers between 0.0 and 1.0

    double randomNumber = distribution(engine); // Generate a random number using the engine
    cout << "Generated number = " << randomNumber << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;
class Complex {
public:
    double real;
    double imaginary;

    Complex(double real = 0.0, double imaginary = 0.0): real(real), imaginary(imaginary) {}

    // Unary operator overloading (-)
    Complex operator-(){
        return Complex(-real, -imaginary);
    }

    // Binary operator overloading (+)
    Complex operator+( Complex other){
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Name concept for complex number
    void setName(string name) {
        cout << "Complex number named " << name << " is set." << endl;
    }
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.5, 2.5);

    // Unary operator overloading (-)
    Complex c = -a;
    cout << "Unary Operator Overloading (-): " << c.real << " + " << c.imaginary << "i" << endl;

    // Binary operator overloading (+)
    Complex d = a + b;
    cout << "Binary Operator Overloading (+): " << d.real << " + " << d.imaginary << "i" << endl;

    // Name concept for complex number
    a.setName("Complex A");

    return 0;
}
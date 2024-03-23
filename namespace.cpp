#include <iostream>
using namespace std;

namespace ns1 {
    double pi = 3.14159;
    
    double area(double radius) {
        return pi * radius * radius;
    }
}

namespace ns2 {
    double area(double length, double width) {
        return length * width;
    }
}

int main() {
    double radius = 5.0;
    double circleArea = ns1::area(radius);
    double rectangleArea =ns2::area(10,10);
    cout << "The area of the circle is: " << circleArea << endl;
    cout << "The area of the rectangle is: " << rectangleArea << endl;   
    return 0;
}
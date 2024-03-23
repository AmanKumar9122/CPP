#include<iostream>
using namespace std;
class Base {
public:
     virtual void print() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base obj;
    Derived derivedObj;

    Base* ptr = &derivedObj; // Pointer to the base class pointing to the derived class object

    obj.print();   // Early binding: calls Base::print()
    derivedObj.print(); // Early binding: calls Derived::print()
    ptr->print();  // Early binding: calls Base::print()

    return 0;
}

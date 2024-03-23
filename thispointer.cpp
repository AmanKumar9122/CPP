#include<iostream>
using namespace std;
class MyClass {
private:
    int value;

public:
    void setValue(int val) {
        this->value = val;  // Accessing member variable using this pointer
    }

    void printValue() {
        cout << "Value: " << this->value << endl;  // Accessing member variable using this pointer
    }
};

int main() {
    MyClass obj1;
    MyClass obj2;

    obj1.setValue(42);
    obj2.setValue(75);

    obj1.printValue();
    obj2.printValue();

    return 0;
}

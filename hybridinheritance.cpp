#include <iostream>

class Base1 {
public:
    void func1() {
        std::cout << "Base1::func1()" << std::endl;
    }
};

class Base2 {
public:
    void func2() {
        std::cout << "Base2::func2()" << std::endl;
    }
};

class Derived : public Base1, virtual public Base2 {
public:
    void func3() {
        std::cout << "Derived::func3()" << std::endl;
    }
};

int main() {
    Derived d;
    d.func1();  // Accessing func1() from Base1
    d.func2();  // Accessing func2() from Base2
    d.func3();  // Accessing func3() from Derived

    return 0;
}

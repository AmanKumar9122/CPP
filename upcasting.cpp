#include<iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"Base Class";
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"Derived Class";
    }
};
int main(){
    Base obj;
    Derived derivedobj;
    Base*ptr=&derivedobj;
    ptr->display();
    return 0;
}
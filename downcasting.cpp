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
        cout<<"Deived Class";
    }
};
int main(){
    Base obj;
    Derived derivedobj;
    Derived*ptr= (Derived*)&obj;//explicit downcasting is done here.
    ptr->display();
    return 0;
}
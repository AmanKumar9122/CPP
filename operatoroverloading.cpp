#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;
    complex(int r=0,int i=0){
        real=r;
        imaginary=i;
    }
    complex operator+(complex obj){
        complex sum;
        sum.real= real+obj.real;
        sum.imaginary= imaginary+obj.imaginary;
        return sum;
    }
    void print(){
        cout<<real<<"+i"<<imaginary;    }
};
int main(){
    complex c1(10,5),c2(24,8);
    complex c3= c1+c2;
    c3.print();
}
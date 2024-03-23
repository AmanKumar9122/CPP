#include<iostream>
using namespace std;
class sum{
    int a,b;
    public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<a+b;
    }
};
class result : public sum
{
};
int main(){
    result e;
    e.set(5 , 6);
    e.display();
}
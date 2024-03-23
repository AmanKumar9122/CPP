#include <iostream>
using namespace std;
class b1{
    public:
     virtual void greet(){
        cout << "How are you?";
    }
};
class b2 : public b1
{
    public:
    void greet(){
        cout << "Kaise ho?";
    }
};
int main(){
    b1 * obj1;
    b2 obj2;
    obj1 = & obj2;
    obj1->greet();
}
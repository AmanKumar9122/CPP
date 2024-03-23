//  pure virtual function abstract class
#include <iostream>
using namespace std;
class b1{
    public:
     virtual void greet() = 0;
};
class b2 : public b1
{
    public:
    void greet(){
        cout << "Kaise ho?";
    }
};
class b3 : public b1
{
    public:
    void greet(){
        cout << "How are you?";
    }
};
int main(){
    b1 *obj1[2];
    b2 obj2;
    b3 obj3;
    obj1[0] = & obj2;
    obj1[1] = & obj3;
    obj1[0]->greet();
    cout<<endl;
    obj1[1]->greet();
    return 0;
}
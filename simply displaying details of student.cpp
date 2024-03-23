#include<iostream>
using namespace std;
class student{
    public:
    string name,address,gender;
    int age;
    public:
    int display(){
        cout<<"Hi\n";
    }
};
int main(){
    student s1;
 s1.display();
    s1.name="Aman";
s1.address="Bihar";
s1.age=19;
s1.gender="male";
cout<<s1.name<<endl;
cout<<s1.address<<endl;
cout<<s1.age<<endl;
cout<<s1.gender<<endl;
return 0;
}

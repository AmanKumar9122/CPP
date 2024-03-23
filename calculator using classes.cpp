#include<iostream>
using namespace std;
class calculator{
public:
int a,b,result;
int input(){
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;
}
int add(){
    result=a+b;
cout<<"Sum="<<result<<endl;
}
int sub(){
    result=a-b;
cout<<"Sub="<<result<<endl;
}
int multi(){
    result=a*b;
cout<<"Multiplication="<<result<<endl;
}
int div(){
    result=a/b;
cout<<"Div="<<result<<endl;
}
int mod(){
    result=a%b;
cout<<"Mod="<<result<<endl;
}
};
int main(){   
calculator c1;
c1.input();
c1.add();
c1.sub();
c1.multi();
c1.div();
c1.mod();
    return 0;
}

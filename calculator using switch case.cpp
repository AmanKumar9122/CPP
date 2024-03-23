#include<iostream>
using namespace std;
int main(){
    int num1,num2,result;
    char ch;
    cout<<"choose the operation to perform:'+,-,*,/,%\n";
    cin>>ch;
    cout<<"Enter num 1:\n";
    cin>>num1;
    cout<<"Enter num 2:\n";
    cin>>num2;
    switch (ch)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    case '%':
        result=num1%num2;
        break;
    
    default:
    cout<<"Invalid operator";
        break;
    }
    cout<<"Result="<<result;
return 0;
}

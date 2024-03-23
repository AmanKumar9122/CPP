#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the Value of a:"<<endl;
	cin>>a;
	cout<<"Enter the Value of b:"<<endl;
	cin>>b;
	cout<<"Before Swapping Value of a and b"<<endl;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	a=a-b;
	b=a+b;
	a=b-a;
	cout<<"After Swapping Value of a and b"<<endl;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	return 0;
}

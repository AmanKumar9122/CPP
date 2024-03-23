#include<iostream>
using namespace std;
template<class C>
class Calculator
{
	private:
		C num1, num2;
		public:
			Calculator(C n1,C n2)
			{
				num1=n1;
				num2=n2;
			}
	void displayResult()
	{
		cout<<"Number are :"<<num1<<" & "<<num2<<endl;
		cout<<"Addition is :"<<add()<<endl;
		cout<<"Subtraction is :"<<sub()<<endl;
		cout<<"Multiplication is :"<<mul()<<endl;
		cout<<"Dividion is :"<<div()<<endl;
	}
	 C add(){
		return num1+num2;
	}
	C sub(){
		return num1-num2;
	}
	C mul(){
		return num1*num2;
	}
	C div(){
		return num1/num2;
	}
};
int main(){
	Calculator<int>intCalculator(2,3);
	Calculator<float>floatCalculator(2.25,4.5);
	intCalculator.displayResult();
	floatCalculator.displayResult();
	return 0;
}

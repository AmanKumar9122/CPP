#include<iostream>
int main (){
	int num1,num2,num3;
	std::cout<<"Enter the value of num1\n";
	std::cin>>num1;
	std::cout<<"Enter the value of num2\n";
	std::cin>>num2;
	std::cout<<"Enter the value of num3\n";
	std::cin>>num3;
	if(num1>num2)
	{
	std::cout<<"num1 is greater";
	}
	else if(num1>num3)
	{
	std::cout<<"num1 is greater";
	}
	else if(num2>num3)
	{
	std::cout<<"num2 is greater";
	}
	else{
	std::cout<<"num3 is greater";
	}
	return 0;
}

#include<iostream>
int main()    
{    
int n,r,sum=0,temp;    
std::cout<<"enter the number=";    
std::cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
std::cout<<"palindrome number ";    
else    
std::cout<<"not palindrome";   
return 0;
}   

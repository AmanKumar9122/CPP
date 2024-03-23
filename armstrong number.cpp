#include <iostream>    
int main()  
{  
int n,r,sum=0,temp;    
std::cout<<"Enter the Number=";    
std::cin>>n;    

temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
std::cout<<"Armstrong Number";    
else    
std::cout<<"Not Armstrong Number";   
return 0;  
}  

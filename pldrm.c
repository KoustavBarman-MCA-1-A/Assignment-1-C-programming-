#include<stdio.h>  
int main()    
{    
printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
int n,r,sum=0,temp;    
printf("Enter a number: ");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("Palindrome number ");    
else    
printf("Not palindrome number");   
return 0;  
} 
  #include<stdio.h>
 int main()
 {
 float a,b,x,s;
 printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");
 printf("Enter the Values of a,b,x: ");
 scanf("%f%f%f",&a,&b,&x);
 s=(a*x+b)/(a*x-b);
 printf("The Value is : %.2f",s);
 return 0;
 }

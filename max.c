#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }
    if(num1 == num2)
    {
        printf("Both are equal");
    }
    return 0;
}
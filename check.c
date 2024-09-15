#include <stdio.h>  
int main()  
{  
    int n;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter a number: ");  
    scanf("%d", &n);  
    if (n > 0)  
        printf("%d is positive.", n);  
    else if (n < 0)  
        printf("%d is negative.", n);  
    else if (n == 0)  
        printf("%d is zero.", n);  
    return 0;  
} 
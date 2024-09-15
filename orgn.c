#include <stdio.h>
int main()
{
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");
    int i, org_num, num, remainder, sum;
    long fact;
    printf("Enter a number to check Strong number: ");
    scanf("%d", &num);
    org_num = num;
    sum = 0;
    while(num > 0)
    {
        remainder = num % 10;
        fact = 1;
        for(i=1; i<=remainder; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == org_num)
    {
        printf("%d is STRONG NUMBER", org_num);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", org_num);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char ch;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else
        printf("'%c' is Consonant.", ch);
    return 0;
}
#include <stdio.h>
int main() {
    char c;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
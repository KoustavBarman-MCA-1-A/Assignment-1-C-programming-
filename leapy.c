
#include <stdio.h>

int main() {
    int year;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
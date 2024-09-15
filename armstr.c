#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
       result = result + remainder * remainder * remainder;
       originalNum = originalNum / 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
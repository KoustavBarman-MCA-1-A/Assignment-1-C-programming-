#include <stdio.h>
int fibonacci(int x) {
   if(x == 0)
      return 0;
   else if(x == 1)
      return 1;
   else
      return (fibonacci(x-1) + fibonacci(x-2));
}
int main() {
   int n;
   printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
   printf("Enter the number of terms: ");
   scanf("%d", &n);
   printf("Fibonacci Series: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", fibonacci(i));
   }
   return 0;
}
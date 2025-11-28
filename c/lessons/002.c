
#include <stdio.h>

int main() {
  int num1, num2, sum;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2); // Reads two integers from the user

  sum = num1 + num2; // Calculates the sum

  printf("Sum = %d\n", sum); // Prints the sum
  return 0;
}


#include <stdio.h>

int main()
{
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  { // Uses the modulo operator to check for remainder when divided by 2
    printf("%d is an even number.\n", num);
  }
  else
  {
    printf("%d is an odd number.\n", num);
  }
  return 0;
}

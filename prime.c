#include <stdio.h>
int main() {
  int n, i;
  int temp = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      temp = 1;
      break;
    }
  }

  if (n == 1)
    return 1;

  else {
    if (temp == 0)
      printf("%d is a prime number.\n", n);
    else
      printf("%d is not a prime number.\n", n);
  }
  return 0;
}

#include <stdio.h>

// Procedural way
int invert(int n)
{
  int inverted = 0;
  while (n > 0)
  {
    inverted = inverted * 10 + n % 10;
    n = n / 10;
  }
  return inverted;
}

// Recursive way
int invert_recursive(int n, int inverted)
{
  if (n == 0)
  {
    return inverted;
  }
  else
  {
    return invert_recursive(n / 10, inverted * 10 + n % 10);
  }
}

int main()
{
  int n;
  printf("Entre the way: 1 for procedural and 2 for recursive: ");
  int way;
  scanf("%d", &way);
  if (way == 1)
  {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Inverted number: %d\n", invert(n));
  }
  else
  {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Inverted number: %d\n", invert_recursive(n, 0));
  }
  return 0;
}

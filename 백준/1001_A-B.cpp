#include <stdio.h>

int sub(int i, int j)
{
  return i-j;
}

int main()
{
  int A, B;

  scanf("%d %d", &A, &B);

  printf("%d\n", sub(A,B));
}

#include <stdio.h>

int add(int i, int j)
{
  return i+j;
}

int main()
{
  int A, B;

  scanf("%d %d", &A, &B);

  printf("%d\n", add(A,B));
}

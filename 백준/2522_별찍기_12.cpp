#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);

  int i = 0;
  for(; i < num; i++, printf("\n"))
  {
    int j;
    for(j = 0; j < num - i-1; j++)
    {
      printf(" ");
    }
    for(; j < num; j++)
    {
      printf("*");
    }
  }

  for(; i < 2*num-1 ; i++, printf("\n"))
  {
    int j;
    for(j = i; j > num-1; j--)
    {
      printf(" ");
    }
    for(; j > i - num; j--)
    {
      printf("*");
    }
  }
}

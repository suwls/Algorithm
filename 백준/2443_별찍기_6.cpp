#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);

  for(int i = 0; i < num; i++, printf("\n"))
  {
    for(int j = 0; j < i;j++)
    {
      printf(" ");
    }
    for(int j = 2*i; j < 2*num-1; j ++)
    {
      printf("*");
    }
  }
}

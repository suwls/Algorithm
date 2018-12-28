#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);

  for(int i = 0; i < num; i++,printf("\n"))
  {
    for(int j = i; j < num-1; j++)
    {
      printf(" ");
    }
    for(int j = 0; j < 2*i+1; j++)
    {
      printf("*");
    }
  }
}

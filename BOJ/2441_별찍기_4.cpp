#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);
  for(int i = 0; i < num; i++,printf("\n"))
  {
    int j = 0;
    for(; j < i; j++ )
      printf(" ");
    for(; j < num; j++)
      printf("*");
  }
}

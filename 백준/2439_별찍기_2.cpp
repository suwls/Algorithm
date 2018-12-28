#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);

  for(int i = 0; i < num; i++)
  {
    int j=0;
    for(; j<num-i-1; j++)
      printf(" ");
    for(; j <num;j++)
      printf("*");
    printf("\n");
  }
}

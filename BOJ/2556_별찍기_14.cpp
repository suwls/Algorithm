#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);

  for(int i = 0; i < num; i++,printf("\n"))
    for(int j = 0; j < num; j++)
      printf("*");
}

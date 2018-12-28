#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);

  int i ;
  for(i = 0; i < num; i++, printf("\n"))
  {
    for(int j = 0; j <= i; j++, printf("*"));
  }
  for(; i < 2 * num -1; i++, printf("\n"))
  {
    for(int j = num-1; j > i - num; j--, printf("*"));
  }
}

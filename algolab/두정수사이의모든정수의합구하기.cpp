#include <stdio.h>

int main()
{
  int numData, s_num, f_num, sum;

  scanf("%d", &numData);

  for(int i = 0; i < numData; i++)
  {
    sum = 0;
    scanf("%d %d", &s_num, &f_num);

    for(int j = s_num; j <= f_num; j++)
    {
      sum += j ;
    }

    printf("%d\n", sum);
  }
}

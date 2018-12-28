#include <iostream>

using namespace std;

int main()
{
  int num;
  scanf("%d",&num);

  int count_5 = 0;
  int count_3 = 0;

  while(num)
  {
    if(num / 5 ==0)
    {
      num -= 3;
      count_3++;
    }
    count_5 += num/5;
    num %= 5;

    if(num ==4 || num < 3)
    {
      count_3 = -1;
      count_5 = 0;
      break;
    }

  }

  printf("%d",count_3+count_5 );

}

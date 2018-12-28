#include <stdio.h>

using namespace std;

bool is_prime(int num)
{
  for(int i = 2; i*i <= num; i++)
  {
    if(num % i == 0)
      return false;
  }
  return true;
}

void cnt_prime(int first, int len)
{
  if(len == 1) printf("%d\n", first);

  for(int i = 1; i < 10; i++)
  {
    int temp = first*10 + i;
    if(is_prime(temp))
    {
      cnt_prime(temp,len-1);
    }
  }
}

int main()
{
  int length;
  scanf("%d", &length);

  int prime[4] = {2,3,5,7};

  for(int i = 0; i < 4; i ++)
  {
    int first = prime[i];
    cnt_prime(first,length);
  }
}

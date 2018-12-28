#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
  char N[100001];
  scanf("%s", N);

  int len_N = strlen(N);

  bool check_zero = false;

  int sum = 0;

  for(int i = 0; i < len_N; i++)
  {
    if(!(N[i]- 48))
    {
      check_zero = true;
    }
    else
    {
      sum += N[i] - 48;
    }
  }

  sort(N, N+len_N);

  if(check_zero && !(sum%3) && sum > 0)
  {
    for(int i = len_N-1; i >= 0; i--)
    {
      printf("%d", N[i]-48);
    }
  }
  else
  {
    printf("-1");
  }
}

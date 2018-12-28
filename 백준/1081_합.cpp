#include <stdio.h>

using namespace std;

int main()
{
  int L,U;

  scanf("%d %d",&L, &U);

  int sum=0;

  for(int i = L; i<=U; i++)
  {
    for(int j = i; j;)
    {
      sum += j%10;
      j /= 10;
    }
  }
  printf("%d",sum );

}

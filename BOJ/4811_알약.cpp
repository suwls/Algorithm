#include <stdio.h>

int main()
{
  while(true)
  {
    int num;
    long long dp[31][31] = {0,};

    scanf("%d", &num);

    if(!num)break;

    for(int i = 1; i <= num; i++)
    {
      dp[0][i] = 1;
    }
    for(int i = 1; i <= num; i++)
    {
      for(int j = i; j <= num; j++)
      {
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
      }
    }
    printf("%lld\n", dp[num][num]);
  }
}

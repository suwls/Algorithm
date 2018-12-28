#include <stdio.h>

int main()
{
  int numCoin, value;
  scanf("%d %d", &numCoin, &value);

  int coin[101];
  int dp[10001] = {1,};

  for(int i = 0; i < numCoin; i++)
    scanf("%d", &coin[i]);

  for(int i = 0 ; i < numCoin; i++)
    for(int j = coin[i]; j <= value; j++)
      dp[j] += dp[j-coin[i]];

  for(int i = 0; i < 10001; i++)
    printf("%d", dp[i]);

  printf("%d\n", dp[value]);
}

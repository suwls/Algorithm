#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int nCity, nBus, city_s, city_f, weight;
  int dist[100][100];
  int cnt = 0;
  const int INF = 1000000000;

  scanf("%d %d", &nCity,&nBus);

  for(int i = 0 ; i < nCity; i++)
    for(int j = 0; j < nCity; j++)
      dist[i][j] = (i==j ? 0 : INF);

  while(nBus--)
  {
    scanf("%d %d", &city_s, &city_f);
    dist[city_s-1][city_f-1] = 1;
    dist[city_f-1][city_s-1] = 1;
  }

  for(int k = 0; k < nCity; k++)
    for(int i = 0; i < nCity; i++)
      for(int j = 0; j < nCity; j++)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    // 
    // for(int i = 0; i < nCity; i++,printf("\n"))
    //   for(int j = 0; j < nCity; j++)
    //       printf("%d ", dist[i][j] );

  for(int i = 0; i < nCity; i++)
  {
    if(dist[0][i] > 0 && dist[0][i] < INF)
      cnt++;
  }
  printf("%d\n", cnt);
}

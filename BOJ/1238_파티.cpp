#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int nCity, nBus, city_s, city_f, weight, dest;
  int dist[1000][1000];
  int dst[1000] = {0,};
  const int INF = 1000000000;

  scanf("%d %d %d", &nCity,&nBus, &dest);

  for(int i = 0 ; i < nCity; i++)
    for(int j = 0; j < nCity; j++)
      dist[i][j] = (i==j ? 0 : INF);

  while(nBus--)
  {
    scanf("%d %d %d", &city_s, &city_f, &weight);
    dist[city_s-1][city_f-1] = min(dist[city_s-1][city_f-1], weight);
  }

  for(int k = 0; k < nCity; k++)
    for(int i = 0; i < nCity; i++)
      for(int j = 0; j < nCity; j++)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

  int max__ = 0;

  for(int i = 0 ; i < nCity; i++)
    dst[i] = dist[dest-1][i] + dist[i][dest-1];

  for(int i = 0; i < nCity; i++)
    max__ = max(max__,dst[i]);
  printf("%d\n", max__);
}

#include <stdio.h>

int main()
{
  int nCity, nBus, city_s, city_f, weight;
  const int INF = 1000000000;

  scanf("%d %d", &nCity,&nBus);

  int dist[100][100];

  for(int i = 0 ; i < nCity; i++)
    for(int j = 0; j < nCity; j++)
      dist[i][j] = (i==j ? 0 : INF);

  while(nBus--)
  {
    scanf("%d %d %d", &city_s, &city_f, &weight);
    if(weight < dist[city_s-1][city_f-1])
      dist[city_s-1][city_f-1] = weight;
  }

  for(int k = 0; k < nCity; k++)
    for(int i = 0; i < nCity; i++)
      for(int j = 0; j < nCity; j++)
      {
        if(dist[i][j] > dist[i][k]+dist[k][j])
          dist[i][j] = dist[i][k]+dist[k][j];
      }

  for(int i = 0 ; i < nCity; i++,printf("\n"))
    for(int j = 0; j < nCity; j++)
      printf("%d ",dist[i][j]==INF? 0 : dist[i][j] );

}

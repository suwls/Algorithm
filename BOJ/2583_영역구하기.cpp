#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int M, N;
int size_area = 0;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int map[101][101] = {0,};
int area[101];

void bfs(int i, int j){
  int cnt = 0;
  queue<pair<int, int> > que;
  que.push(make_pair(i, j));
  map[i][j] = 1;
  cnt++ ;

  while(!que.empty())
  {
    int x = que.front().second;
    int y = que.front().first;
    que.pop();

    for(int k = 0; k < 4; k++)
    {
      int nx = x + dx[k];
      int ny = y + dy[k];
      if(nx >= 0 && nx < N && ny >=0 && ny < M && map[ny][nx] == 0)
      {
        cnt++;
        que.push(make_pair(ny,nx));
        map[ny][nx] = 1;
      }
    }
  }
  area[size_area++] = cnt;
}

void output(){
  printf("%d\n", size_area);
  for(int i = 0; i < size_area; i++)
  {
    printf("%d ",area[i]);
  }
}

int main(){
  int K;
  scanf("%d %d %d", &M, &N, &K );
  int xmin, ymin, xmax, ymax;
  while(K--)
  {
      scanf("%d %d %d %d", &xmin, &ymin, &xmax, &ymax);

      for(int i = ymin; i < ymax; i ++)
      {
        for(int j = xmin; j < xmax; j++ )
        {
          map[i][j] = 1;
        }
      }
  }

  for(int i = 0; i < M; i++)
  {
    for(int j = 0 ; j < N; j++)
    {
      if(map[i][j] == 0)
      {
        bfs(i,j);
      }
    }
  }
  sort(area, area+size_area);
  output();
}

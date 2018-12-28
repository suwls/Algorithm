#include <stdio.h>
#include <queue>

using namespace std;

int dx[8] = {-1, -2, 1, 2, -2, -1, 2, 1};
int dy[8] = {-2, -1, -2, -1, 1, 2, 1, 2};
int len, xs, ys, xf, yf;
int x, y, nx, ny ;

int main()
{
  int numTestCases;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    int map[301][301]={0,};
    bool visited[301][301] = {0,};

    queue <pair<int, int> > que;

    scanf("%d", &len);
    scanf("%d %d", &xs, &ys);
    scanf("%d %d", &xf, &yf);

    que.push(make_pair(ys, xs));
    visited[ys][xs] = 1;

    while(!que.empty())
    {
      x = que.front().second;
      y = que.front().first;

      if(x == xf && y == yf)
        break;

      visited[y][x] = 1;
      que.pop();
      for(int i = 0; i < 8; i++)
      {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && nx < len && ny >=0 && ny < len && !visited[ny][nx])
        {
          visited[ny][nx]=1;
          que.push(make_pair(ny,nx));
          map[ny][nx] = map[y][x] +1;
        }
      }
    }

    for(int i = 0; i < len; i++)
    {
      for(int j = 0; j < len; j++)
      {
        visited[i][j] = 0;
      }
    }
    printf("%d\n", map[yf][xf]);
  }
}

#include <stdio.h>

using namespace std;

#define MAX_SIZE 51

int map[MAX_SIZE][MAX_SIZE];
int X, Y, numData;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int y, int x)
{
  map[y][x] = 0;
  for(int i = 0; i < 4; i ++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];

    if(ny >= 0 && ny < Y && nx >= 0 && nx < X && map[ny][nx] == 1)
    {
      map[ny][nx] = 0;
      bfs(ny,nx);
    }
  }
}

int main()
{
  int numTestCases;
  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    int cnt = 0;
    int xx, yy;
    scanf("%d %d %d", &X, &Y, &numData);

    while(numData--)
    {
      scanf("%d %d", &xx, &yy);
      map[yy][xx] = 1;
    }

    for(int i = 0; i < Y; i++)
    {
      for(int j = 0; j < X; j++)
      {
        if(map[i][j])
        {
          cnt++;
          bfs(i, j);
        }
      }
    }

    printf("%d\n", cnt);

  }
}

#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    int maze[100][100];
    bool visited[100][100] = {0,};
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int N, M;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%1d", &maze[i][j]);
        }
    }

    queue <pair<int, int> > que;

    que.push(make_pair(0,0));
    visited[0][0] = true;

    while(!que.empty())
    {
      int y = que.front().first;
      int x = que.front().second;
      que.pop();

      for(int i = 0; i < 4; i++)
      {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < M && ny >= 0 && ny < N && !visited[ny][nx] && maze[ny][nx] == 1 )
        {
          que.push(make_pair(ny,nx));
          maze[ny][nx] = maze[y][x]+1;
          visited[ny][nx] = true;
        }
      }
    }
    printf("%d \n",maze[N-1][M-1]);
}

#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

char board[21][21];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
bool abc[26] = {0,};
int R,C;
int length = 1;
int nmax = 0;

void dfs(int y, int x, int cnt)
{
  //length = max(length,cnt);
  abc[board[y][x] - 'A'] = true;
  for(int i = 0; i < 4; i++)
  {
    int nx =  x+ dx[i];
    int ny = y + dy[i];

    if(nx >= 0 && nx < C && ny >= 0 && ny < R  && !abc[board[ny][nx] - 'A'])
    {
      length++;
      if(nmax < length)
        nmax = length;
      dfs(ny,nx, cnt+1);
    }
  }
//  printf("%d\n",length );
  length--;
  abc[board[y][x] - 'A'] = false;
}

int main()
{
  scanf("%d %d", &R, &C);
  for(int i = 0; i < R; i++)
  {
    scanf("%s", board[i]);
  }
  dfs(0,0,1);
  printf("%d\n", nmax);

}

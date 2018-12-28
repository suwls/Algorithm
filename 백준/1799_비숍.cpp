#include <stdio.h>

using namespace std;

int num;
int board[10][10]={0,};
int is_in[10][10] = { 0,};
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, -1};
bool check = false;
int cnt = 0;


void safe(int y, int x)
{

  for(int k = 0; k < 4; k++)
  {
    int nx = x + dx[k];
    int ny = y + dy[k];
    printf("%d %d\n", ny, nx);

    if(nx < 0 || nx >= num || ny < 0 || ny >= num)
      continue;

    if(is_in[ny][nx])
    {
      check = true;
      return;
    }
    safe(ny, nx);
  }
}

int main()
{
  scanf("%d", &num);
  for(int i = 0; i < num; i++)
    for(int j = 0; j < num; j++)
      scanf("%d", &board[i][j]);

  for(int i = 0; i < num; i++)
  {
    for(int j = 0; j < num ;j++)
    {
      if(board[i][j])
      {
        check = false;
        printf("ininddsfdfsfssin\n");
        safe(i,j);
        if(!check)
        {
          cnt++;
          is_in[i][j] = 1;
        }
      }
    }
  }
}

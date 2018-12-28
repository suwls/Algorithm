#include <stdio.h>

using namespace std;

int bingo[5][5];

int check()
{
  int cnt=0;
  for(int i =0; i < 5; i++)
  {
    if(bingo[i][0] == 0 && bingo[i][1] == 0 && bingo[i][2] == 0 && bingo[i][3] == 0 && bingo[i][4] == 0)
      cnt++;
    if(bingo[0][i] == 0 && bingo[1][i] == 0 && bingo[2][i] == 0 && bingo[3][i] == 0 && bingo[4][i] == 0)
      cnt++;
  }
  if(bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[2][2] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0)
    cnt++;
  if(bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[2][2] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0)
    cnt++;

  return cnt;
}
int main()
{
  int cnt;
  for(int i = 0; i < 5; i++) //빙고판입력
    scanf("%d %d %d %d %d", &bingo[i][0],&bingo[i][1],&bingo[i][2],&bingo[i][3],&bingo[i][4]);

  int data;
  for(int k = 0; k < 25; k++)
  {
    scanf("%d", &data);

    for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
      {
        if(bingo[i][j] == data)
          bingo[i][j] = 0;
      }
    }

    if(check() >= 3)
    {
      printf("%d\n", k+1);
      break;
    }
  }
}

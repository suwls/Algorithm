#include <stdio.h>

using namespace std;

int main()
{
  int N, M;
  int arr[50][50];
  int max = 0;

  scanf("%d %d", &N, &M);

  for(int i = 0; i < N; i++)
    for(int j = 0 ; j < M; j++)
      scanf("%1d", &arr[i][j]);

  for(int i = 0 ; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      for(int k = j+1; k < M; k++)
      {
        if(arr[i][j] == arr[i][k] && k-j > max && i+k-j < N && arr[i+k-j][j] == arr[i][j] && arr[i+k-j][k] == arr[i][j])
        {
          max = k-j;
        }
      }
    }
  }
  max ++;

  printf("%d\n",max*max );
}

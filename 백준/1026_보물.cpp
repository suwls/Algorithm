#include <stdio.h>

int main()
{
  int numData;
  scanf("%d", &numData);

  int A[50];
  int rA[50];
  int B[50];
  int check_B[50] = {0,};

  for(int i = 0; i < numData; i ++)
  {
    scanf("%d", &A[i]);
  }
  for(int i = 0; i < numData; i ++)
  {
    scanf("%d", &B[i]);
  }

  int sum = 0;

  for(int i = 0; i < numData; i++)
  {
    int max = -1;
    int index_max = 0;
    for(int j = 0; j < numData; j++)
    {
      if(max < B[j] && check_B[j] == 0)
      {
        max = B[j];
        index_max = j;
      }
    } //B 배열의 max 위치를 찾음

    int min = A[0];
    int index_min = 0;

    for(int j = 0; j < numData; j++)
    {
      if(min > A[j])
      {
        min = A[j];
        index_min = j;
      }
    }

    rA[index_max] = A[index_min];

    A[index_min] = 9999;
    check_B[index_max] = -1;

  }

  for(int i = 0; i < numData; i++)
  {
        sum += rA[i] * B[i];
  }

  printf("%d", sum );
}

#include <stdio.h>

int main()
{
  int A[10];
  int B[10];

  int gameScore_A=0;
  int gameScore_B=0;

  for(int i = 0; i < 10 ; i++)
  {
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < 10 ; i++)
  {
    scanf("%d", &B[i]);
  }

  for(int i = 0 ; i < 10; i++)
  {
    if(A[i] > B[i])
      gameScore_A++;
    else if(A[i] < B[i])
      gameScore_B++;
  }

  if(gameScore_A > gameScore_B)
  {
    printf("A\n");
  }
  else if(gameScore_A < gameScore_B)
  {
    printf("B\n");
  }
  else
  {
    printf("D\n");
  }
}

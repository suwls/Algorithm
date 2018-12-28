#include <stdio.h>

int main()
{
  int numTest;

  scanf("%d", &numTest);

  for(int i = 0; i < numTest; i++)
  {
    int H, W, N;

    int roomH, roomW;

    scanf("%d %d %d", &H, &W, &N);

    roomH = N % H;
    roomW =  roomH ? (N / H) + 1 : N/H ;

    (roomH == 0) ? printf("%d", H) :  printf("%d", roomH);

    if(roomW < 10)
      printf("0");

    printf("%d\n", roomW);
  }
}

#include <stdio.h>

using namespace std;

int main()
{
  int numTop;
  scanf("%d\n",&numTop);
  long long stack[500002]={};

  int index = 0;
  int top = -1;
  long long height;
  for(int i=0; i<numTop;i++)
  {
    scanf("%lld", &height);
    top++;


      while(top-- && stack[top] < height)

      stack[index++] = height;

      printf("%d ", top+1);
      top = index-1;
  }
}

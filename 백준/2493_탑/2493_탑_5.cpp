#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
  int numTop;
  scanf("%d",&numTop);
  stack <int> building;
  stack <int> index;

  int count = 0;
  int height;
  while(numTop--)
  {
    scanf("%d", &height);

    while(!building.empty()&& building.top() < height)
    {
      building.pop();
      index.pop();
    }

    if(building.empty())
    {
      building.push(height);
      index.push(++count);
      printf("0 " );
      continue;
    }

    printf("%d ",index.top());

    building.push(height);
    index.push(++count);
  }
}

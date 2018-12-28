#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
  int numTestCases;

  scanf("%d", &numTestCases);

  for(int a = 0 ; a < numTestCases; a++)
  {
    int n, w, l;

    scanf("%d %d %d", &n, &w, &l);

    queue <int> bridge;

    int tp;

    int count = 0;

    int sum = 0;

    while(n--)
    {
      scanf("%d", &tp);

      bool check = true;

      while(check)
      {
        sum += tp;

        if(sum <= l)
        {
          bridge.push(tp);
          count++;
          check = false;
        }
        else{
          sum -= tp;
          bridge.push(0);
          count++;
        }

        if(bridge.size() == w)
        {
          sum -= bridge.front();
          bridge.pop();
        }
      }
    }

    count += w;

    printf("%d\n", count);
  }
}

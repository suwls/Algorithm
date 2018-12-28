#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
  int numTestCases;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    queue <pair<int,int> > qu;
    int numData, index, imp;
    int count = 0;
    int max = 0;

    pair<int,int> pairr;

    scanf("%d %d", &numData, &index);

    for(int i = 0; i < numData; i++)
    {
      scanf("%d", &imp);
      if(max < imp)
      {
        max = imp;
      }
      qu.push(make_pair(i,imp));
    }

    while(qu.front().first != index || qu.front().second != max){
        if(qu.front().second == max)
        {
          max = 0;
          qu.pop();
          count++;

          for(int i = qu.front().first; i == qu.front().first; )
          {
            pairr = qu.front();
            if(qu.front().second > max)
              max = qu.front().second;
            qu.pop();
            qu.push(pairr);
          }

        }
      }
      printf("%d\n",count );
  }
}

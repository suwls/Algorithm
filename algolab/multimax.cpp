#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int numTestCases,numData;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    int arr[10000], ans[4];
    int maxNum;

    scanf("%d", &numData);

    for(int i = 0; i < numData; i++)
    {
      scanf("%d", &arr[i]);
    }

    sort(arr,arr+numData);

    ans[0] = arr[numData-1]*arr[numData-2];
    ans[1] = arr[0]*arr[1];
    ans[2] = ans[0]*arr[numData-3];
    ans[3] = arr[numData-1]*ans[1];

    maxNum = ans[0];

    for(int i = 1; i < 4; i++)
    {
      maxNum = max(maxNum,ans[i]);
    }

    printf("%d\n", maxNum);

  }
}

#include <stdio.h>

int main()
{
  int numTestCases, data;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    scanf("%d", &data);
    int temp, index;

    for(int i = 2; i < 65; i++)
    {
      int ans[30];
      temp = data;
      for(index = 0; temp / i; index++)
      {
        ans[index] = temp%i;
        temp /= i;
      }

      for(int k = 0, index--; k <= index; k++,index--)
      {
        if(ans[k] != ans[index])
          break;
      }

    }
  }
}

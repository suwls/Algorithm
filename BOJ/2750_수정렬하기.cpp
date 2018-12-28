#include <stdio.h>

using namespace std;

int main()
{
  int numCase;
  scanf("%d\n",&numCase);

  int * arr = new int[numCase];

  int data ;
  int temp;

  for(int i = 0 ; i < numCase; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < numCase; i++)
  {
    for(int j = i+1; j<numCase; j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int i = 0; i< numCase; i++)
  {
    printf("%d\n",arr[i] );
  }


}

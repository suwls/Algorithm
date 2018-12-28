#include <stdio.h>


int arr[10];
int ch = 0;

int arr_size, temp;

void check(int now_index, int len)
{
  if(len == 0)
  {
    ch = 1;
    return;
  }

  int left = now_index - len;
  int right = now_index + len;

  if(left > -1 && arr[left] != -1)
  {
    temp = arr[left];
    arr[left] = -1;
    check(left,temp);

  }

  if(right < arr_size && arr[right] != -1)
  {
    temp = arr[right];
    arr[right] = -1;
    check(right, temp);

  }
}

int main()
{
  int numTestCases, st;;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    ch =0;
    scanf("%d", &arr_size);

    scanf("%d", &st);


    for(int i = 0; i < arr_size; i++)
    {
      scanf("%d", &arr[i]);
    }

    check(st,arr[st]);

    printf("%d\n", ch);

  }
}

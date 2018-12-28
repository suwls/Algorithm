#include <stdio.h>

int arr[10];
int arr_size;
bool cc = false;

int check(int now_index, int len)
{
  printf("now %d len %d \n", now_index, len);

  if(now_index == arr_size-1)
  {
    return 1;
  }

  int left = now_index - arr[now_index];
  int right = now_index + arr[now_index];

  if(left > -1 && arr[left])
  {
    arr[left] = 0;
    return check(left, arr[left]);
  }
  else if(right < arr_size && arr[right])
  {
    arr[right] = 0;
    return check(right, arr[right]);
  }
  else{
    return 0;
  }
}

int main()
{
  int numTestCases, st;;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    scanf("%d", &arr_size);

    scanf("%d", &st);


    for(int i = 0; i < arr_size; i++)
    {
      scanf("%d", &arr[i]);
    }


    printf("%d\n", check(st,arr[st]));

  }
}

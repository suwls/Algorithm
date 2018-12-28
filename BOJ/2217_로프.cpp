#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  scanf("%d", &N);

  int arr[100000];
  int max = 0;

  int data;

  for(int i = 0; i < N; i++)
  {
    scanf("%d", &data);
    arr[i] = data;
  }

  sort(arr,arr+N);

  for(int i = 0; i < N; i++)
  {
    if(max < arr[i]*(N-i))
      max = arr[i]*(N-i);
  }

  printf("%d\n", max);
}

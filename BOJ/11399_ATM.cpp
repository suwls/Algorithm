#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  scanf("%d", &N);

  int arr[1000];
  int data;

  for(int i = 0; i < N; i++)
  {
    scanf("%d", &data);
    arr[i] = data;
  }

  sort(arr, arr+N);
  long long sum = arr[0];

  for(int i = 1; i < N; i++)
  {
    arr[i] += arr[i-1];
    sum += arr[i];
  }

  printf("%lld\n", sum);
}

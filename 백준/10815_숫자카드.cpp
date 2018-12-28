#include <stdio.h>
#include <algorithm>

using namespace std;

int N, M;
int cardNum;
int arr[500001];

int find_card()
{
  int left = 0;
  int right = N-1;
  int mid;
  while(left <= right)
  {
    mid = (left + right)/2;
    if(arr[mid] < cardNum)
    {
      left = mid+1;
    }
    else if(arr[mid] > cardNum)
    {
      right = mid-1;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}

int main()
{

  scanf("%d", &N);

  for(int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  sort(arr,arr+N);

  scanf("%d", &M);

  for(int i = 0; i < M; i++)
  {
    scanf("%d", &cardNum);
    printf("%d ", find_card());
  }




}

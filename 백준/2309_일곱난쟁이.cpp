#include <stdio.h>
#include <algorithm>
#include <stack>

using namespace std;

int arr[9];
int sum;
stack <int> ans;


void dfs(int n)
{
  ans.push(arr[n]);
  sum += arr[n];

  if(ans.size() == 7)
  {
    if(sum == 100)
      break;
    else
    {
      ans.pop();
      dfs(n+1);
    }
  }
  else()
}

int main()
{
  for(int i = 0; i < 9; i++)  //아홉난쟁이의 키 입력
  {
    scanf("%d", &arr[i]);
  }

  sort(arr, arr+9);



  for(int i = 0; i < N; i++)
  {
    dfs(i);

    if(sum == 100)
      break;
  }

  for(int i = 0 ; i < 7; i++)
  {
    printf("%d", arr[i]);
  }




}

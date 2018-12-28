//파라메트릭 서치
//이분탐색기준 = left, right, mid 기준 = 자르는 나무의 높이
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  long long N, M;
  long long tree[1000000];
  scanf("%lld %lld", &N, &M);

  for(int i = 0; i < N; i++)
  {
    scanf("%lld", &tree[i]);
  }

  sort(tree, tree+N);

  long long left, right, mid, len, ans;
  left = 0;  //기준이 자르는 나무의 높이니까 최소(left)는 0높이에서 자르는 거
  right = tree[N-1];  //right 는 최고높이에서 자르는 거

  while(left <= right)
  {
    //printf("left %lld right %lld ", left, right );
    len = 0;
    mid = (left + right) / 2 ;

    for(long long i = 0 ; i < N; i++)
    {
      if(tree[i] > mid)
      {
        len += tree[i] - mid;
      }
    }

    //printf("len %lld mid %lld\n", len , mid);
    if(len >= M)
    {
      left = mid+1;
      ans = mid;
    }
    else
    {
      right = mid -1;
    }
  }

  printf("%lld\n", ans);


}

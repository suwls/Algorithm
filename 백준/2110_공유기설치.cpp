////////////////////////////파라메트릭 서치
//중간값으로 값을 도출했을 때
//원하는 값보다 개수가 많으면 중간값을 늘리고(간격을 늘리고 == left = mid+1)
//원하는 값보다 개수가 적으면 중간값을 줄인다(간격을 줄인다 == right = mid-1)
//여기서 left, right, mid 는 인덱스가 기준이 아리나 아니라 공유기가 설치되는 간격이 기준
// == > 파라메트릭 서치

#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[2000000];
bool router[200000];

int main()
{
  int nH, nR;

  scanf("%d %d", &nH, &nR);

  for(int i = 0; i < nH; i++)
  {
    scanf("%d", &arr[i]);
  }

  sort(arr,arr+nH);

  int left = 1;
  int right = arr[nH-1]-arr[0];
  int mid, start, cnt, ans;

  while(left <= right)
  {
    mid = (left + right) / 2 ;
    start = arr[0];
    cnt = 1;

    for(int i = 1; i < nH; i++)
    {
      if(arr[i]- start >= mid)  //현재 잡은 기준점보다 간격이 넓어서 공유기 설치해도되는경우
      {
      //  printf(" %d - %d >= %d,\n",arr[i], start, mid );
        start = arr[i];
        cnt++;
      }
    }

    if(cnt >= nR)  //cnt == nR 인 경우 left > right 될때까지 조건 만족함
    {
      left = mid + 1; // 설치된 공유기의 수가 더 많으므로 간격을 늘려준다.
      ans = mid;      // ans에 저장해주는 이유는 mid 로 프린트 할 경우 쓰레기값이 출력될수있어서
    }
    else
    {
      right = mid - 1;
    }
  //  printf("%d %d\n", cnt, mid);
  }
  printf("%d \n", ans);
}

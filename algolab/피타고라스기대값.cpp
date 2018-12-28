#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
  int numTestCases, n, m, a, b, p, q;

  float ans[1000], S, A;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    scanf("%d %d", &n, &m);

    vector<pair<int,int> > score(n,make_pair(0,0));

    while(m--)
    {
      scanf("%d %d %d %d", &a, &b, &p, &q);

      score[a-1].first += p;
      score[a-1].second += q;
      score[b-1].first += q;
      score[b-1].second += p;
    }

    for(int i = 0; i < n; i++)
    {
      S = score[i].first * score[i].first;
      A = score[i].second * score[i].second;

      if(S == 0 && A ==0)
        ans[i] = 0;
      else
        ans[i] = S / (S+A);
    }

    float min = ans[0], max= ans[0];

    for(int i = 0; i < n ; i++)
    {
      if(min > ans[i])
        min = ans[i];

      if(max < ans[i])
        max = ans[i];
    }

    printf("%d\n%d\n", int(max*1000), int(min*1000));
  }
}

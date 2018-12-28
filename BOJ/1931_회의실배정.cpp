#include <stdio.h>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp (pair<int,int> p, pair<int,int> q)

{
  return p.second < q.second || (p.second == q.second && p.first < q.first);
}

int main()
{
  int nMeeting;
  int time_s, time_f;
  int count = 0;

  vector<pair<int,int> > v;

  scanf("%d", &nMeeting);

  for(int i = 0; i < nMeeting; i++)
  {
    scanf("%d %d", &time_s, &time_f);
    v.push_back(make_pair(time_s, time_f));
  }

  sort(v.begin(), v.end(), cmp);

  time_f = v[0].second;
  count++;

  for(int i = 1; i < v.size(); i++)
  {
    if(v[i].first >= time_f)
    {
      time_f = v[i].second;
      count++;
    }
  }
  printf("%d\n", count);
}

#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int k ;

  while(scanf("%d", &k))
  {
    if(!k)
      break;
    vector <int> num;
    vector <int> ind;
    int s;
    for(int i = 0; i < k; i++)
    {
      scanf("%d", &s);
      num.push_back(s);
    }

    for(int i = 0; i < 6; i++)
    {
      ind.push_back(1);
    }
    for(int i = 0; i < k-6; i++)
    {
      ind.push_back(0);
    }

    sort(ind.begin(),ind.end());

    vector<vector<int> > ans;

    do{
      vector<int> temp;
      for(int i = 0; i<ind.size();i++)
      {
        if(ind[i] == 1)
          temp.push_back(num[i]);
      }
      ans.push_back(temp);
      }while(next_permutation(ind.begin(),ind.end()));

      sort(ans.begin(), ans.end());

      for (int i = 0; i < ans.size(); i++)
      {
          for (int j = 0; j < ans[i].size(); j++)
              printf("%d ", ans[i][j]);
          printf("\n");
      }
      printf("\n");

  }
}

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int sum_n(string str)
{
  int num = 0;
  for(int i = 0; i<str.length(); i++)
  {
    if(str[i]-'0' <= 9)
      num += str[i] - '0';
  }
  return num;
}

bool compare(string a, string b){
  if(a.length() != b.length())
  {
    return a.length()<b.length();
  }
  else
  {
    int n1 = sum_n(a);
    int n2 = sum_n(b);
    if(n1 != n2)
    {
      return n1 < n2;
    }
    else
    {
      return a<b;
    }
  }
}

int main()
{
  int numCase;
  vector<string> v;

  scanf("%d", &numCase);

  for(int i = 0; i < numCase; i++)
  {
    char temp[51];
    scanf("%s", temp);
    string snum(temp);
    v.push_back(snum);
  }

  sort(v.begin(), v.end(), compare);

  for(int i = 0 ; i < numCase; i++)
  {
    printf("%s\n", v[i].c_str());
  }



}

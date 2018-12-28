#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  string N;
  cin >> N;

  if(N.length() < 2)
  {
    N = '0'+N;
  }

  int cnt = 1;
  int sum, ans, temp;

  sum = (N[0]-'0') + (N[1] - '0');
  ans = (N[0]-'0')*10 + (N[1]-'0');

  N[0] = N[1];
  N[1] = (sum%10 + 48);

  temp = (N[0]-'0')*10 + (N[1]-'0');

  while(ans != temp)
  {
    sum = (N[0]-'0') + (N[1] - '0');
    N[0] = N[1];
    N[1] = (sum%10 + 48);
    temp = (N[0]-'0')*10 + (N[1]-'0');
    cnt++;
  }
  cout << cnt<<endl;
}

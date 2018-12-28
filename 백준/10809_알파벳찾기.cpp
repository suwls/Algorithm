#include <iostream>
#include <string>

using namespace std;

int main()
{
  int alpha[26];
  string str;

  for(int i = 0; i < 26; i++)
    alpha[i] = -1;

  cin >> str;

  int temp;

  for(int i = 0; i < str.length(); i++)
  {
    temp = str[i]-'a';
    if(alpha[temp] == -1)
      alpha[temp] = i;
  }

  for(int i = 0; i < 26; i++)
    cout <<alpha[i]<<" ";
}

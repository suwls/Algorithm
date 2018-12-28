/* 9012 괄호 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  int numTestCases;
  cin >> numTestCases;
  while(numTestCases--)
  {
    string ps ;
    stack<char> st;
    bool check = 1;
    cin >> ps;

    for(int i = 0 ; i < ps.length(); i++)
    {
      if(ps[i]=='(')
      {
        st.push('(');
      }
      else if(ps[i] ==')' && !st.empty())
      {
        st.pop();
      }
      else
      {
        check = 0;
        break;
      }
    }

    if(check == 0 || !st.empty())
      cout << "NO" <<endl;
    else
      cout << "YES"<<endl;

  }

}

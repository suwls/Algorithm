#include <stdio.h>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
  char cal[51];
  scanf("%s", cal);
  stack <char> st;
  int sum = 0;
  int n = 1;
  int len_cal = strlen(cal);
  int index;

  for(index = 0 ; cal[index] != '-' && cal[index] !='\0'; index++)
    st.push(cal[index]);

  while(!st.empty())
  {
    if(st.top() != '-' && st.top() != '+')
    {
      sum += (st.top()-'0')*n;
      n *= 10;
      st.pop();
    }
    else
    {
      n = 1;
      st.pop();
    }
  }

  for(index += 1; index < len_cal; index++)
    st.push(cal[index]);

  n = 1;

  while(!st.empty())
  {
    if(st.top() != '-' && st.top() != '+')
    {
      sum -= (st.top()-'0')*n;
      n *= 10;
      st.pop();
    }
    else
    {
      n = 1;
      st.pop();
    }
  }
  printf("%d\n", sum);
}

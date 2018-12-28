#include <iostream>
#include "sujin_stack.h"

using namespace std;


int main(void)
{
  int numInst;

  cin >> numInst;

  sujin_stack st;
  
  while(numInst--)
  {

    string input;
    cin >> input;

    if(input == "push")
    {
      int data;
      cin >> data;
      st.push(data);
    }
    else if(input == "pop")
    {
      cout << st.pop() << endl;
    }
    else if(input == "size")
    {
      cout << st.size() << endl;
    }
    else if(input == "empty")
    {
      cout << st.empty() << endl;
    }
    else if(input == "top")
    {
      cout << st.top() << endl;
    }
  }
}

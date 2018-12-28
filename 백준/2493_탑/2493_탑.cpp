#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int numTop;

  cin >> numTop;

  stack <int> stack1;
  stack <int> stack2;

  int height;

  while(numTop--)
  {
    cin >> height;
    stack1.push(height);
  }

  int count = 0;

  while(!stack1.empty())
  {
    int temp;

    temp = stack1.top();
    stack1.pop();

    while(!stack1.empty())
    {
      if(stack1.top() >temp)
        count++;
      stack2.push(stack1.top());
      stack1.pop();
    }
    while(!stack2.empty())
    {
      stack1.push(stack2.top());
      stack2.pop();
    }
    cout<<count<<endl;

    count = 0;
  }



}

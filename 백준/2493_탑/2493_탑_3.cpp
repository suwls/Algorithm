#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main(){
  int numTop;

  scanf("%d\n", &numTop );

  int *arr = new int[numTop];

  stack <int> stack1;
  stack <int> stack2;

  int height;

  while(numTop--)
  {
    scanf("%d",&height);

    if(stack1.empty())
    {
      printf("%d ",stack1.size() );
      stack1.push(height);
      continue;
    }
    else if(stack1.top()>=height)
    {
      printf("%d ",stack1.size() );
      stack1.push(height);
      continue;
    }
    else
    {
      while(!stack1.empty() && stack1.top()<height)
      {
        stack2.push(stack1.top());
        stack1.pop();
      }

      printf("%d ",stack1.size() );
      while(!stack2.empty())
      {
        stack1.push(stack2.top());
        stack2.pop();
      }
      stack1.push(height);
      continue;
    }
  }
}

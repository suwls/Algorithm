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

  int count_Top = numTop;
  int index = numTop-1;
  while(numTop--)
  {
    scanf("%d", &height);
    stack1.push(height);
  }
  int count = 0;

  while(!stack1.empty())
  {
    int temp;

    temp = stack1.top();
    stack1.pop();
    count ++;

    if(!stack1.empty())
    {
      while(!stack1.empty() && stack1.top() < temp)
      {
        stack2.push(stack1.top());
        stack1.pop();
        count++;
      }
      if(stack1.empty())
        arr[index--]=0;
      else
        arr[index--]= (count_Top-count);

      while(!(stack2.empty()))
      {
        stack1.push(stack2.top());
        stack2.pop();
        count--;
      }
    }
    else
      arr[index--]=0;
  }
  for(int i = 0; i < count_Top; i ++)
    printf("%d ",arr[i] );

}

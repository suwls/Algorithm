/* 10828 스택 */

#include <iostream>
#include <string>

using namespace std;


void push(int x, int *arr, int *index)
{
  *index += 1;
  arr[*index] = x;
}

void pop(int *arr, int *index)
{
  if(*index == -1)
  {
    cout << -1<<endl;
  }
  else
  {
    cout << arr[*index]<<endl;
    *index -= 1;
  }
}

void size(int *index)
{
  cout << *index+1<<endl;
}

void empty(int *index)
{
  if(*index == -1)
    cout << 1 <<endl;
  else
    cout << 0 <<endl;
}

void top(int *arr, int *index)
{
  if(*index == -1)
    cout << -1 <<endl;
  else
    cout << arr[*index]<<endl;
}

int main(void)
{
  int numInst;
  int stack[10000];
  int index = -1 ;

  cin >> numInst;
  while(numInst--)
  {
    string input;
    cin >> input;

    if(input == "push")
    {
      int data;
      cin >> data;
      push(data, stack, &index);
    }
    else if(input == "pop")
    {
      pop(stack, &index);
    }
    else if(input == "size")
    {
      size(&index);
    }
    else if(input == "empty")
    {
      empty(&index);
    }
    else if(input == "top")
    {
      top(stack, &index);
    }
  }
}

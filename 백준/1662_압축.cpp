#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
  string input;

  cin >> input;

  int index = 0;

  for(int i = 0; input[i] != '\0'; i++)
  {
    if(input[i] == '(')
    {
      index = i;
    }
  }


}

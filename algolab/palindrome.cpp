//
//  palindrome.hpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 8..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

int pos = 0;

int checkPalindrome(char str[], int first, int last)
{
    if(first >= last)
        return 1;
    else if(str[first] != str[last])
        return 0;
    else
        return checkPalindrome(str, first+1, last-1);
   // return checkPalindrome(str, first++, last--);
}

void conversion(int n, int base, char *str)
{
    static char baseTable[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ+";
    
    if(n >= base)
    {
        conversion(n/base, base, str);
    }
    str[pos++] = baseTable[n%base];
}

int main()
{
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        char str[1000001];
        
        int data;
        int result = 0;
        
        scanf("%d", &data);
        
        for(int i = 2; i <= 64; i++)
        {
            
            conversion(data, i, str);
            result =checkPalindrome(str, 0, pos-1);
     
            if(result)
                break;
            pos = 0;
        }
        
        printf("%d\n", result);
    }
    return 0;
}

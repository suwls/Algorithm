
//
//  palindrome.hpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 8..
//  Copyright © 2018년 이수진. All rights reserved.
//

#ifndef palindrome_hpp
#define palindrome_hpp

#include <stdio.h>

#endif /* palindrome_hpp */

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
        return checkPalindrome(str, first++, last--);
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

    printf("k");

    scanf("%d", &numTestCases);

    while(numTestCases--)
    {
        char str[1000001];

        int data;

        int result = 0;
        printf("ㅣ");

        scanf("%d", &data);

        printf("0");

        for(int i = 2; i <= 64; i++)
        {
            printf("1");
            conversion(data, i, str);
//            for(int j = 0; j < pos; j++)
//            {
//                printf("%c", str[j]);
//            }
//            printf("\n");
            printf("2");
            result =checkPalindrome(str, 0, pos-1);
            printf("3");


            if(result)
                break;
            pos = 0;
        }
        printf("\n");

        printf("%d\n", result);
    }
}

//
//  재귀를이용한팰린드롬판별.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 10..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int checkPalindrome(char *str, unsigned long first, unsigned long last){
    
    if(first >= last)
        return 1;
    else if(str[first] != str[last])
        return 0;
    else
        return checkPalindrome(str, first+1, last-1);
    
}

int main(){
    
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        char str[1000001];
        
        scanf("%s", str);
        
        printf("%d\n", checkPalindrome(str, 0, strlen(str)-1));
        
    }
    
}

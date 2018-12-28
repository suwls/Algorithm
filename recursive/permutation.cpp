//
//  test.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 9..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <memory>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;

}

void permuteString(char str[], unsigned long begin, unsigned long end)
{
    int i;
    
    unsigned long range = end - begin;
    
    printf("begin : %lu end : %lu range : %lu\n", begin, end, range);
    
    if(range == 1)
        printf("%s\n", str);
    else{
        for(i = 0; i < range; i++)
        {
            swap(str[begin],str[begin+i]);
            permuteString(str, begin+1, end);
            swap(str[begin],str[begin+i]);
        }
    }
}

int main(){
    char str[5] = "abc";

    printf("%lu\n",strlen(str));
    
    permuteString(str, 0, strlen(str));
}

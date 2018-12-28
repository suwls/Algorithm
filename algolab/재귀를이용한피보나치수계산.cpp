//
//  재귀를이용한피보나치수계산.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 10..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int pibonachi(int n)
{
    if(n<2)
        return n;
    else
        return pibonachi(n-1)+pibonachi(n-2);
}

int main(){
    
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int data;
        
        scanf("%d", &data);
        
        printf("%d\n", pibonachi(data));
    }
    
}

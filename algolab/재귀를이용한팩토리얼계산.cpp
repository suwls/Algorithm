//
//  재귀를이용한팩토리얼계산.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 10..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int data;
        scanf("%d", &data);
        
        printf("%d\n", factorial(data) );
    }
}

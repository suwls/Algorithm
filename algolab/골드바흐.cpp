//
//  골드바흐.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 11..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

bool isPrime (int num){
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while (numTestCases--) {
        int data;
        int num1, num2;
        int gab = 100000;
        scanf("%d", &data);
        
        
        for(int i = 2; i < data  ; i++)
        {
            if(!isPrime(i))
                continue;
            for(int j = i; data - i - j >= 0 ; j++)
            {
               if(!isPrime(j))
                   continue;
                if(!(data- i - j))
                {
                    if(j - i < gab)
                    {
                        num1 = i;
                        num2 = j;
                        gab = j - i;
                    }
                }
            }
        }
        printf("%d %d\n", num1, num2);
    }
}



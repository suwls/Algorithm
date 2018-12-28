//
//  Eureka.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 10..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int data;

int eureka(int data, int count, int n)
{
    if(count == 3 && data == 0)
    {
        printf("0 count : %d, data : %d, n : %d \n", count, data, n);
        return 1;
    }
    
    
    if(count < 3 && data > 0)
    {
        
        int result = 0;
        for(int i = n; data > 0 && count <3 ; i++)
        {    
            printf("ㅏ count : %d, data : %d, n : %d \n", count, data, n);
            data -= (i * (i + 1)) / 2;
            printf("uu count : %d, data : %d, n : %d \n", count, data, n);
            result = eureka(data, count + 1, i);
            printf("%d\n",result);
            if(result)
                break;
            
            
        }
        printf("1 count : %d, data : %d, n : %d \n", count, data, n);
        return result;
    }
    else
    {
        printf("2 count : %d, data : %d, n : %d \n", count, data, n);
       // data += (n* (n+ 1)) / 2;
        return 0;
    }
        
}

int main(){
    
    int numTestCases;
    
    scanf("%d",&numTestCases);
    
    while (numTestCases--) {
        
        //int data;
        scanf("%d", &data);
        
        printf("%d\n", eureka(data, 0, 1));
        
    }
}

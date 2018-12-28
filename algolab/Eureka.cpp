//
//  Eureka.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 10..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int eureka(int data, int n ,int count)
{
    if(data == 0 && count ==3)
    {
        printf("1 data : %d n : %d count : %d \n", data, n, count);
       return 1;
    }
    else if(n >45){
        printf("2 data : %d n : %d count : %d \n", data, n, count);
        return 0;
    }
    else if((data == 0 && count != 3) || (data != 0 && count ==3))
    {
        printf("3 before data : %d n : %d count : %d \n", data, n, count);
        data += (n*(n+1))/2 ;
        printf("3 after data : %d n : %d count : %d \n", data, n, count);
        return eureka(data,n+1,count-1);
    }
    else{
        printf("4 before data : %d n : %d count : %d \n", data, n, count);
        data -= (n*(n+1))/2;
        printf("4 after : %d n : %d count : %d \n", data, n, count);
        return eureka(data, n+1, count+1);
    }
}

int main(){
    
    int numTestCases;
    
    scanf("%d",&numTestCases);
    
    while (numTestCases--) {
        
        int data;
        scanf("%d", &data);
        
        int result = eureka(data, 1, 0);
        
        printf("%d\n", result);
    }
}



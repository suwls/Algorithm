//
//  farm.cpp
//  algorithm
//
//  Created by 이수진 on 03/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <stdio.h>

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int a, b , n , w;
        scanf("%d %d %d %d", &a, &b, &n, &w);
        
        int nSheep, nGoat;
        
        if(a == b)
        {
            if(w == a + b)
            {
                printf("1 1\n");
                continue;
            }
            else
            {
                printf("-1\n");
                continue;
            }
            
        }
        else{
            nGoat = (( a * n ) - w )/(a-b);
            nSheep = n - nGoat;
            
            if(nSheep < 1 || nGoat < 1 || (( a * n ) - w )%(a-b) != 0)
                printf("-1\n");
            
            else
                printf("%d %d\n", nSheep, nGoat);
        }
    }
}

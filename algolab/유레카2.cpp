//
//  유레카2.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 11..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int main()
{
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int data;
        
        bool check = false;
        scanf("%d", &data);
        
        for(int i = 1; i < 45 && !check; i++)
        {
            data -= (i * (i+1))/2;
            for(int j = 1; j < 45 && !check; j++)
            {
                data -= (j * (j+1))/2;
                for(int k = 1; k < 45 && !check; k++)
                {
                    data -= (k * (k+1))/2;
                    if(!data)
                        check = true;
                    data += (k * (k+1))/2;
                }
                data += (j * (j+1))/2;
            }
            data += (i * (i+1))/2;
        }
        
        printf("%d\n", check);
    }
}

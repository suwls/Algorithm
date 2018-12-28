//
//  Passport Control.cpp
//  algorithm
//
//  Created by 이수진 on 09/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <stdio.h>

int main()
{
    int numTestCases, n, k;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        scanf("%d %d", &n, &k);
        int counter[101]={0,};
        int nPass;
        int index = 0;
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &nPass);
            
            if(counter[index] > nPass)
            {
                for(index = 0; index < k; index++)
                {
                    if(counter[index] <nPass)
                    {
                        break;
                    }
                }
                
                if(index == k)
                {
                    break;
                }
            }
            counter[index] = nPass;
        }
        
        if(index == k)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
}

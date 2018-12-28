//
//  blackchain.cpp
//  algorithm
//
//  Created by 이수진 on 03/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <stdio.h>

int main()
{
    int numTestCases, cnt;
    long long data;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        scanf("%lld", &data);
        cnt = 0;
        while(data > cnt+1)
        {
            data -= cnt;
            data = (data/2) - 1;
            cnt++;
        }
        printf("%d\n", cnt);
    }
}

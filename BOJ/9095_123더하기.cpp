//
//  9095_123더하기.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 30..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

using namespace std;

int func(int temp, int res, int count)
{
    if(temp == res )
        return count+1;
    else if(temp > res)
        return count;
    else{
        count =func(temp+1, res, count);
        count =func(temp+2, res, count);
        count =func(temp+3, res, count);
        return count;
    }
}

int main()
{
    int numTestCases, data, count;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        scanf("%d", &data);
        count = func(0,data, 0);
        printf("%d\n", count);
    }
}

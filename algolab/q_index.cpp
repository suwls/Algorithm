//
//  q_index.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 19..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int arr[1000], n, index;
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        
        sort(arr,arr+n, desc);  //내림차순 정렬
        
        for(index = 0; index < n; index++)
            if(index >= arr[index] || arr[index] == 0)
                break;
        
        printf("%d\n", index);
    }
}

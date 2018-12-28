//
//  twonumbers.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 19..
//  Copyright © 2018년 이수진. All rights reserved.
//

// min 값 초기화를 문제의 조건에 맞게 고쳐줘서 (9999 -> 100000000) 90 -> 100

#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int arr[1000000];
        
        int n, k, cal;
        scanf("%d %d", &n, &k);

        int first = 0, last = n-1;
        int min_gab = 100000000;
        int count = 0;
        
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        
        sort(arr, arr+n);
        
        while(first < last)
        {
            cal = arr[first] + arr[last] - k;
            if(cal > 0)
            {
                if(min_gab > cal){
                    min_gab = cal;
                    count = 1;
                }
                else if(min_gab == cal)
                {
                    count++;
                }
                last--;
            }
            else if(cal < 0)
            {
                cal = abs(cal);
                if(min_gab > cal){
                    min_gab = cal;
                    count = 1;
                }
                else if(min_gab == cal)
                {
                    count++;
                }
                first++;
            }
            else{
                if(min_gab != cal)
                {
                    min_gab = cal;
                    count = 0;
                }
                count++;
                first++;
                last--;
            }
        }
        printf("%d\n", count);
    }
}

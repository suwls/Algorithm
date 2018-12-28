//
//  happyNumber2.cpp
//  algorithm
//
//  Created by 이수진 on 16/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);
    while (numTestCases--)
    {
        long long n, temp_n;
        int temp;
        bool flag = true;
        scanf("%lld", &n);
        
        vector<long long> v;
        
        while(flag)
        {
            if(n == 1)
            {
                printf("HAPPY\n");
                break;
            }
            
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i] == n)
                {
                    printf("UNHAPPY\n");
                    flag = false;
                    break;
                }
            }
            
            v.push_back(n);
            
            temp_n = 0;
            
            while(n)
            {
                temp = n % 10;
                temp_n += temp * temp;
                n = n/10 ;
            }
            
            n = temp_n;
            
        }
    }
}

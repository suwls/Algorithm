
//
//  mergingfile.cpp
//  algorithm
//
//  Created by 이수진 on 18/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <stdio.h>
#include<algorithm>

#define INF 999999999

using namespace std;

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int n;
        
        int sum[502] = {0,};
        int M[502][502] = {0,};
        
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++)
        {
            int data;
            scanf("%d", &data);
            sum[i] = sum[i - 1] + data;
        }
        
        for (int k = 1; k < n; k++)
        {
            for (int i = 1; i <= n - k; i++)
            {
                M[i][i + k] = INF;
                for (int j = i; j < i + k ; j++)
                {
                    M[i][i + k] = min(M[i][i + k], M[i][j] + M[j+1][i + k]);
                }
                
                M[i][i + k] += sum[i + k] - sum[i - 1];
            }
        }
        printf("%d\n", M[1][n]);
    }
    
}

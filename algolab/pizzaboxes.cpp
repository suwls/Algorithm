//
//  pizzaboxes.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 20..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int n, m, max, max_i=0, max_j=0;
        long long sum = 0;
        int arr[1000][1000];
        int check[1000][1000] = {0,};
        scanf("%d %d", &n, &m);
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m ; j++)
            {
                scanf("%d", &arr[i][j]);
                sum += arr[i][j];
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            max = 0;
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
            sum -= max;
            check[max_i][max_j] = 1;
        }
        
        for(int i = 0; i < m; i++)
        {
            max = 0;
            for(int j = 0; j < n; j++)
            {
                if(arr[j][i] > max)
                {
                    max = arr[j][i];
                    max_i = j;
                    max_j = i;
                }
                
            }
            if(!check[max_i][max_j])
                sum -= max;
        }
        
        printf("%lld\n", sum);
    }
}

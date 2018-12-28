//
//  binaryTree.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 10. 5..
//  Copyright © 2018년 이수진. All rights reserved.


#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int tree[3000000];

int main()
{
    int numTestCases;
    int k;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        scanf("%d", &k);
        
        int ss =pow(2,k+1.0)-2;
        for(int i = 0 ; i < ss; i++)
        {
            scanf("%d", &tree[i]);
        }
        int sum_1 = 0;
        int sum_2 = 0;
        
        for(int i = 2 ; i < ss; i+=2)
        {
            if(tree[i] > tree[i+1])
            {
                tree[i+1] = tree[i];
            }
            else{
                tree[i] = tree[i+1];
            }
        }

        for(int i = 0; i < ss; i = i * 2 + 2)
        {
            sum_1 += tree[i];
        }
        for(int i = 1; i < ss; i = i * 2 + 2)
        {
            sum_2 += tree[i];
        }
        
        if(sum_1 > sum_2)
        {
            tree[1] += sum_1 - sum_2;
        }
        else{
            tree[0] += sum_2 - sum_1;
        }
        
        int kk=0;
        
        for(int i = 0; i < ss; i++)
        {
            kk += tree[i];
        }
    
        printf("%d\n", kk);
    }
}

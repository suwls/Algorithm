//
//  binaryTree.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 10. 5..
//  Copyright © 2018년 이수진. All rights reserved.

// 배열로 트리를 표현하고 다루는 문제인듯하다

#include <stdio.h>
#include <iostream>
#include <math.h>

float k;
int tree[3000000];

using namespace std;

int tree_tour(int temp, int index, int max)
{
    if(index >= pow(2,k+1)-1) return temp;
    //printf("index = %d, edgeW: %d, temp : %d\n", index, tree[index], temp );
    temp +=tree[index];
    if(index >= pow(2,k)-2)
    {
        if(temp > max)
            max = temp;
    }
    else{
        max = tree_tour(temp, 2*index+2, max);
        max = tree_tour(temp, 2*index+3, max);
    }

    return max;
}


int main()
{
    int numTestCases;
    
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        scanf("%f", &k);
        
        //엣지의 개수는 pow(2,k+1)개이다
        for(int i = 0 ; i < pow(2,k+1)-2; i++)
        {
            scanf("%d", &tree[i]);
        }
        int sum = 0;
        int max1 =tree_tour(0, 0,0);    //왼쪽 트리
        int max2 =tree_tour(0,1, 0);    //오른쪽 트리
        
        int max_way = (max1 >= max2? max1 : max2);
        //        printf("최대 경로는 : %d \n", max_way);
        
        
        for(int i = 2 ; i < pow(2,k+1)-2; i+=2)
        {
            if(tree[i] > tree[i+1])
            {
                
                sum += tree[i]- tree[i+1];
                tree[i+1] = tree[i];
            }
            else{
                sum += tree[i+1] - tree[i];
                tree[i] = tree[i+1];
            }
        }
        // 맞음
        
        
        int check_sum = 0;
        for(int i = 0 ; i < 2; i++)
        {
            for(int j = i; j < pow(2,k+1)-2; j = j * 2 + 2)
            {
                check_sum += tree[j];
            }
            tree[i] += (max_way - check_sum);
            sum += check_sum - tree[i];
            check_sum = 0;
        }
        //
        //        for(int i = 0; i < pow(2, k+1)-2; i++)
        //        {
        //            printf("%d ",tree[i]);
        //        }
        //
        //        printf("\n변경 횟수는 : %d\n", sum);
        
        int kk=0;
        
        for(int i = 0; i < pow(2, k+1)-2; i++)
        {
            kk += tree[i];
            //printf("%d ",tree[i]);
        }
        
        printf("%d\n", kk);
    }
}

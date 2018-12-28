//
//  부분집합의합.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 28..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

int N, S;
int number[20];
bool visited[20];

using namespace std;

int func(int index, int sum, int count)
{
    for(int i = index; i < N; i++)
    {
        sum += number[i];
        if(!visited[i])
        {
            if(sum == S)
                count ++;
            visited[i] = 1;
            count = func(i+1, sum, count);
            sum -= number[i];
            visited[i] = 0;
        }
    }
    return count ;
}

int main(){
    scanf("%d %d", &N, &S);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("%d\n", func(0,0, 0));
}

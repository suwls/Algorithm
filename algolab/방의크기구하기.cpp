//
//  방의크기.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 10. 2..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

char map[101][101];
bool visited[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int m, n;

bool cmp(int a, int b)
{
    return a>b;
}

int count_dfs(int y, int x, int count)
{
    map[y][x] = '*';
    for(int i = 0; i < 4; i ++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(map[ny][nx] != '.'||nx < 0 || nx >= m || ny < 0 || ny >= n )
            continue;
        
        count = count_dfs(ny,nx,count+1);
    }
    return count;
}

int main()
{
    int numTestCases;
    
    cin >> numTestCases;
    
    while(numTestCases--)
    {
        int count_arr[100]={0,};
        int index = 0;
        
        cin >> m >> n ;
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> map[i][j];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(map[i][j] == '.')
                {
                    count_arr[index++] = count_dfs(i,j,1);
                }
            }
        }
        
        sort(count_arr, count_arr+index, cmp);
        
        cout << index << endl;
        for(int i = 0; i < index; i++)
        {
            cout << count_arr[i] << " ";
        }
        cout << endl;

    }
}

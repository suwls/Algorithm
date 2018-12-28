//
//  모노톤길.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 22..
//  Copyright © 2018년 이수진. All rights reserved.
//

// 0,0 에서 시작하도록 78 -> 84
// 벡터 사이즈를 벗어나는 인덱스에 접근하지 못하도록 84 -> 100

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    int x, y;
}Cafe;

bool cp(Cafe a, Cafe b)
{
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

bool cp2(Cafe a, Cafe b)
{
    if(a.x == b.x)
        return a.y > b.y;
    return a.x > b.x;
}

int main(){
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while(numTestCases--)
    {
        int num_cafe, nQuz, nData;
        
        vector <Cafe> v;
        
        scanf("%d", &num_cafe);
        
        Cafe cafe;
        int xx, yy;
        cafe.x = 0;
        cafe.y = 0;
        v.push_back(cafe);
        
        while(num_cafe--)
        {
            scanf("%d %d", &xx, &yy);
            if(xx == 0 && yy ==0)
                continue;
            
            cafe.x = xx;
            cafe.y = yy;
            
            v.push_back(cafe);
        }
        
        sort(v.begin()+1, v.end() ,cp);
        
        int i=1;
        
        if(v[i].x == 0)
        {
            for(; v[i].x == 0 && i < v.size(); i++);
            
            if(v[1].y > 0)
                sort(v.begin()+1, v.begin()+i ,cp);
            else
                sort(v.begin()+1, v.begin()+i ,cp2);
        }
        
        for(; i < v.size(); i++)
        {
            if(v[i].x != v[i-1].x)
            {
                int j ;
                for(j = i; j+1 < v.size() && v[j].x == v[j+1].x ; j++) ;   //끝 = j-1
                
                if(v[i].y != v[i-1].y)
                    sort(v.begin()+i, v.begin()+j+1,cp2);
            }
        }
        
        scanf("%d", &nQuz);
        while(nQuz--)
        {
            scanf("%d", &nData);
            printf("%d %d\n", v[nData-1].x, v[nData-1].y);
        }
    }
}

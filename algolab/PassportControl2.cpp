//
//  passport.cpp
//  algorithm
//
//  Created by 이수진 on 10/11/2018.
//  Copyright © 2018 이수진. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ifstream instream;
    instream.open("input.txt");
    
    int numTestCases, n, k;
    instream >> numTestCases;
    
    while(numTestCases--)
    {
        int arr[101];
        int cnt = 0;
        int temp=0;
        
        instream>> n >> k;
        if (instream.peek() == EOF)break;
        
        for(int i = 0; i < n; i++)
            instream>>arr[i];
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(arr[j] > temp)
                {
                    temp = arr[j];
                    arr[j]=0;
                }
            }
            if(temp != 0)
                cnt++;
            temp = 0;
        }
        
        if(cnt>k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

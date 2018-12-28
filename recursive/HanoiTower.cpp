//
//  HanoiTower.cpp
//  algorithm
//
//  Created by 이수진 on 2018. 9. 12..
//  Copyright © 2018년 이수진. All rights reserved.
//

#include <stdio.h>

void Hanoi(int n, char from, char by, char to)
{
    if(n>0)
    {
        Hanoi(n-1, from, to, by);
        printf("Move disk from %c to %c \n", from, to);
        Hanoi(n-1, by, from, to);
    }
}

int main()
{
    int numDisk = 3;
    
    printf("Number of disks to move : %d\n", numDisk);
    Hanoi(numDisk, 'A', 'B', 'C');
}

#include <cstdio>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    char maze[101][101];

    int N, M;

    scanf("%d %d", &N, &M);


    for(int i = 0; i < N; i++)
    {
      scanf("%s", maze[i]);
    }

    queue <pair<int, int> > que;
    queue <long long> que_len;

    int x = 0;
    int y = 0;
    long long len = 0;

    que.push(make_pair(x,y));
    que_len.push(++len);
    maze[y][x] = '0';


    while(! (que.back() == make_pair(N-1, M-1)))
    {


        y = que.front().first;
        x = que.front().second;
        len = que_len.front();

        if(x < M-1 && maze[y][x+1] == '1')
        {
            maze[y][x+1] = '0';
            que.push(make_pair(y ,x +1));
            que_len.push(len +1 );
        }

        if(y < N-1 && maze[y+1][x] == '1')
        {
            maze[y+1][x] = '0';
            que.push(make_pair(y +1,x ));
            que_len.push(len +1 );
        }

        if(x > 0 && maze[y][x-1 ] == '1')
        {
            maze[y][x -1] = '0';
            que.push(make_pair(y  ,x -1 ));
            que_len.push(len +1 );
        }

        if(y > 0 && maze[y-1][x] == '1')
        {
            maze[y-1][x] = '0';
            que.push(make_pair(y-1 ,x));
            que_len.push(len +1 );
        }

        que.pop();
        que_len.pop(); 

    }

    printf("%lld\n", que_len.back() );
}

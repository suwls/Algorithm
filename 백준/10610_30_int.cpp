#include <cstdio>
using namespace std;

int t;
int n[10];
int main()
{
    for(int x; scanf("%1d", &x) != -1;){
        t += x;
        n[x]++;
    }

    if(t % 3 || !n[0]) puts("-1");
    else{
        for(int i = 9; i >= 0; --i){
            while(n[i]--){
                printf("%d",i);
            }
        }
    }
}

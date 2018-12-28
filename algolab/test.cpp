#include <stdio.h>

int tree[(1<<21)];
int route[(1<<21)];

using namespace std;

int main()
{
    int numTestCase;
    scanf("%d", &numTestCase);
    
    for(int i=0; i<numTestCase; i++)
    {
        int k;
        scanf("%d", &k);
        
        int len = 1<<(k+1);
        
        for(int j=0; j<len-1; j++)
        {
            tree[j] = 0;
            route[j] = 0;
        }
        
        int sum = 0;
        int left = 0;
        int right = 0;
        int node;
        int max_right = 0;
        int max_left = 0;
        for(int j=1; j<len-1; j++)
            scanf("%d", &tree[j]);
        
        for(int j=len-2; j>0; j-=2)
        {
            right = j;
            left = right - 1;
            node = left/2;
            max_left = 0;
            max_right = 0;
            
            if(max_left < tree[node]+tree[left])
                max_left = tree[node] + tree[left];

            if(max_right < tree[node]+tree[right])
                max_right = tree[node] + tree[right];
            
            if(max_left < max_right)
            {
                tree[left] = tree[right];
                tree[node] += tree[left];
                
                if(right==2)
                    sum += tree[left] + tree[node];
                else
                    sum += tree[left];
            }
            else if(max_left > max_right)
            {
                tree[right] = tree[left];
                tree[node] += tree[left];
                
                if(right==2)
                    sum += tree[left] + tree[node];
                else
                    sum += tree[left];
            }
            else if(max_left == max_right)
            {
                tree[node] += tree[left];
                
                if(right == 2)
                    sum += tree[left] + tree[j/2];
                else
                    sum += tree[left];
            }
        }
        
        printf("%d\n", sum);
        
    }
    return 0;
}

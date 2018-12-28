#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);

  int arr[3] = {n1, n2, n3};
  sort(arr,arr+3);

  char ABC[4];
  scanf("%s", ABC);

  for(int i = 0; i < 3; i++)
  {
    switch (ABC[i]) {
      case 'A':
        printf("%d ", arr[0]);
        continue;
      case 'B':
        printf("%d ", arr[1]);
        continue;
      case 'C':
        printf("%d ", arr[2]);
        continue;
    }
  }
}

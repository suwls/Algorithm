#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int N, X;
  cin >> N >> X;
  int arr[10000];

  for(int i = 0; i<N; i++)
    cin >> arr[i];

  for(int i = 0; i<N; i++)
    if(arr[i] < X)
      cout << arr[i] << " ";
}

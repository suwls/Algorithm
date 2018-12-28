#include <stdio.h>

using namespace std;

int numNode;
char tree[27][2];

void preorder(){
  int cnt = 0;
  printf("%d", tree[0][0]);
  cnt++;
  for(int i = 0; cnt != numNode; i++){
      if(tree[i][0] != '.')
      {
        printf("%d", tree[i][0]);
      }
  }


}

void inorder(){

}

void postorder(){

}

int main()
{
  scanf("%d", &numNode);
  for(int i = 0; i < numNode; i++)
  {
    scanf("%c %c %c", &tree[i][0], &tree[i][1], &tree[i][2]);
  }

  preorder();
  printf("\n");
  inorder();
  printf("\n");
  postorder();
  printf("\n");

}

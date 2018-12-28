#include <stdio.h>

using namespace std;

struct Node *pnode;
struct Node{
  char data;
  Node left, right;
} Node;

class Tree{
  public:
  pnode root;
  void insert(char data, char leftData, char rightData)
  {
    if(root == NULL)
    {
      if(data != '.')
        root = new Node(data);
      if(leftData != '.')
        root.left = new Node(leftData);
      if(rightData != '.')
        root.right = new Node(rightData);
    }
    else
    {
      search(root)
    }
  }
  void search(Node root, char data, char leftData, char rightData)
  {
    if(root == NULL)  return;
    else if(root.data == data){
      if(leftData != '.')
        root.left = new Node(leftData);
      if(rightData != '.')
        root.right = new Node(rightData);
    }
    else
    {
      search(root.left, data, leftData, rightData);
      search(root.right, data, leftData, rightData);
    }
  }

  void preorder(Node root)
  {
    printf("%c", root.data);
    if(root.left != NULL) preorder(root.left);
    if(root.right != NULL) preorder(root.right);
  }

  void inorder(Node root)
  {
    if(root.left != NULL) preorder(root.left);
    printf("%c", root.data);
    if(root.right != NULL) preorder(root.right);
  }

  void postorder(Node root)
  {
    if(root.left != NULL) preorder(root.left);
    if(root.right != NULL) preorder(root.right);
    printf("%c", root.data);
  }
}

int main()
{
  int numNode;
  Tree t ;
  scanf("%d", &numNode);
  char data[4];
  while(numNode--)
  {
    scanf("%s", data);
    t.insert(data[0], data[1], data[2]);
  }
  t.preorder(t.root);
  printf("\n" );
  t.inorder(t.root);
  printf("\n" );
  t.postorder(t.root);
  printf("\n" );
}

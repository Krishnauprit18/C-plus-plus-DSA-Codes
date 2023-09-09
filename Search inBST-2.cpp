#include<simplecpp>

class BinaryTreeNode
{
public:
 int T= data;
int BinartTreeNode<T> *left;
 int BinaryTreeNode<T> *right;

BinaryTreeNode(T data)
{
this->data=data;
left=NULL;
right=NULL
}
};







bool SearchInBST(BinaryTreeNode<int>*root, intx)
{
//base case
if(root==NULL)
{
return false;
}
if(root->data==x)
{
return true;
}
if(root->data>x)
{
// left part me
return SearchInBST(root->left, x)
else
{
// right part me
return SearchInBST(root->right, x)
}

}
}


main_program{

}

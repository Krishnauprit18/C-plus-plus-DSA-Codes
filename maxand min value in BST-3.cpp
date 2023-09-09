#include<simplecpp>

Node* minVal(Node* root)
{
Node* tenp=root;
while(temp->left!=NULL)
{
temp=temp->left;
}
return temp;
}

Node* maxVal(Node* root)
{
Node* tenp=root;
while(temp->right!=NULL)
{
temp=temp->right;
}
return temp;
}

main_program
{
cout<<"min value is"<<minVal(root)->data<<endl;
cout<<"max value is"<<maxVal(root)->data<<endl;

 return 0;
 }

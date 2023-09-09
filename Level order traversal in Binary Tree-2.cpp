
#include<iostream>
#include<queue>
class node
{
public:
int data;
node* left;
node* right;

node(int d)
{
this->data=d;
this->left=NULL;
this->right=NULL;
}
};

node* buildTree(node* root)
{
cout<<"enter the data:"<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1)
{
return NULL;
}
// building tree using recursion
cout<<"enter data for inserting in left:"<<endl;
root->left=buildTree(root->left);
cout<<"enter data for inserting in right:"<<endl;
root->right=buildTree(root->right);
return root;
}

void levelOrderTraversal(node* root)
{
queue<node*>q;
q.push(root);
q.push(NULL);

while(!q.empty())
{
node* temp=q.front();
cout<<temp->data<<endl;
q.pop();

if(temp=NULL)
{// purana level complete traverse ho chuka hai

    cout<<endl;
    is(!q.empty())
    {//queue is still have some child nodes
        q.push(NULL);
    }

}


if(temp->left)
{q.push(temp->left);

}
if(temp->right)
{
q.push(temp->right);
}
}
}

int main(){

   node* root=NULL;

   //creating tree
   root=buildTree(root);

   // level order traversal
   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   cout<<"printing the level order traversal output:"<<endl;
   levelOrderTraversal(root);
   return 0;
}


}

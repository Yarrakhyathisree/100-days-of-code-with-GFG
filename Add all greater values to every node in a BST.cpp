void fillingthefunction(Node*root,int &sum)
{
    if(root==NULL)
    {
        return ;
    }
    fillingthefunction(root->right,sum);
    sum=sum+root->data;
    root->data=sum;
    fillingthefunction(root->left,sum);
}
Node* modify(Node *root)
{
    // Your code here
    int sum=0;
    fillingthefunction(root,sum);
    return root;
}
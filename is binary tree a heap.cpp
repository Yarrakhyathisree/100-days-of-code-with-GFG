class Solution {
  public:
    int isHeapUtil(Node *root, int maxm) {
        if(root == NULL)
            return 0;
            
        if(root->data > maxm){
            return -1;
        }
        
        int left = isHeapUtil(root->left, root->data);
        int right = isHeapUtil(root->right, root->data);
        
        if(left == -1 || right == -1 || (left - right) < 0 || (left - right) > 1){
            return -1;
        } else{
            return left + 1;
        }
    }
    bool isHeap(struct Node* tree) {
        // code here
        if(isHeapUtil(tree, INT_MAX) != -1)
            return true;
        return false;
    }
};
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    void solve(Node * root, int level,int hr,map<int,pair<int,int>>&mp){
    if(root==NULL){
        return;
    }
    if(mp.find(hr)==mp.end()){
        mp[hr]=make_pair(level,root->data);
    }
    if(mp[hr].first > level){
        mp[hr]=make_pair(level,root->data);
    }
    
    solve(root->left,level+1,hr-1,mp);
    solve(root->right,level+1,hr+1,mp);
}
vector<int> topView(struct Node *root)
{
    //Your code here
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    map<int,pair<int,int>>mp;
    solve(root,0,0,mp);
    for(auto it=mp.begin();it!=mp.end();it++){
        ans.push_back((it->second).second);
    }
    
    return ans;
}

};

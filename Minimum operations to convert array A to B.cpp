class Solution {
  public:
  int lis(vector<int> ans)
 {
     vector<int> lis;
     
     for(int i=0;i<ans.size();i++)
     {
          auto it = lower_bound(lis.begin(), lis.end(), ans[i]);
         if(it!=lis.end())
         *it=ans[i];
         else
         lis.push_back(ans[i]);
     }
     return lis.size();
 }
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
         vector<int> ans;
        unordered_set<int> s;
        
        for(int i=0;i<M;i++){
            s.insert(B[i]);
        }
        
        for(int i=0;i<N;i++){
            if(s.find(A[i])!=s.end()){
                ans.push_back(A[i]); 
       
            }
        }
        
        int LCS=lis(ans);
        
        return N+M-(2*LCS);
    
    }
};
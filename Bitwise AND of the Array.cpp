class Solution{
   public:
    int count(int N, vector<int> A,int X)
    {
        // code here
        int pre = 0,ans = N;
        for(int i=30;i>=0;i--){
            if((X>>i) & 1){
                pre = pre ^ (1 << i);
                continue;
            }
            
            int cnt=0;
            long p = pre ^ (1<<i);
            for(int j = 0; j < N; j++){
                if((A[j] & p)==p) cnt++;
            }
            ans = min(ans, N - cnt);
        }
        return ans;
    }
};
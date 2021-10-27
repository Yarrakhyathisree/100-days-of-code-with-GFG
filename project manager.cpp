class Solution{
    public:
    int minTime(vector<pair<int, int>> &dependency, int duration[], int n, int m) {
        // 	Write your code here
        vector<int> v[n+1];
        int vis[n+1]={0},deg[n+1]={0},req[n+1]={0},ans=0;
        for(auto i:dependency)
        {
            v[i.first].push_back(i.second);
            deg[i.second]++;
        }
        vector<int> q;
        for(int i=0;i<n;i++)
        {
            if(deg[i]==0)
            {
                vis[i]=1;
                q.push_back(i);
            }
            req[i]=duration[i];
            ans=max(ans,req[i]);
        }
        while(q.size())
        {
            int node=q.back();
            q.pop_back();
            for(auto i:v[node])
            {
                deg[i]--;
                req[i]=max(req[node]+duration[i],req[i]);
                if(deg[i]==0){
                q.push_back(i);
                vis[i]=1;
                ans=max(ans,req[i]);
                }
            }
        }
        for(int i=0;i<n;i++)
        if(vis[i]==0)
        return -1;
        return ans;
    }
};
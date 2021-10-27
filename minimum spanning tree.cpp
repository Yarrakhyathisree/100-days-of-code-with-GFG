class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	int root(int x, vector<int>&id){
        while(id[x] != x){
            id[x] = id[id[x]];
            x = id[x];
        }
        return x;
    }
    
    int krushkal(vector<pair<int, pair<int, int> > >&v, int &e, vector<int>&id){
        
        int x, y, w, mincost = 0;
        for(int i = 0; i<e; i++){
            w = v[i].first;
            x = v[i].second.first;
            y = v[i].second.second;
            
            int p = root(x, id);
            int q = root(y, id);
            // cout << p << " " << q << endl;
            if(p!=q){
                mincost+=w;
                // cout << "minc= " << mincost << endl;
                id[p] = id[q];
            }
        }
        return mincost;
    }

    int spanningTree(int V, vector<vector<int>> g[])
    {
        // code here
        vector<int>id(V);
        for(int i = 0; i<V; i++){
            id[i] = i;
        }
        vector<pair<int, pair<int, int> > >v;
        map<pair<int, int> , int>mp;
        
        int x, y, w;
        int e = 0;
        for(int i = 0; i<V; i++){
            for(int j = 0; j<g[i].size(); j++){
                x = i;
                y = g[i][j][0];
                w = g[i][j][1];
                if(mp.find(make_pair(x, y))==mp.end() && mp.find(make_pair(y, x))==mp.end()){
                    v.push_back(make_pair(w, make_pair(x, y)));
                    e++;
                    mp[make_pair(x, y)] = 1;
                    mp[make_pair(y, x)] = 1;
                    // cout << i << " " << g[i][j].second << " " << g[i][j].first << endl;
                }    
            }
        }
        // cout << "e " << e << endl;
        sort(v.begin(), v.end());
        return krushkal(v, e, id);
        // return 0;
    }
};
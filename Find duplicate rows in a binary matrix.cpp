vector<int> repeatedRows(vector<vector<int>> matrix, int M, int N) 
{ 
    // Your code here
      vector<int> ans;
    unordered_map<string,int> mp;
    for(int i=0;i<matrix.size();i++)
    {
        string t;
        for(int &j:matrix[i]) t+=char(j+'0');
        if(mp.find(t)!=mp.end())
        {
            ans.push_back(i);
            continue;
        }
        mp[t]=i;
        t.clear();
    }
    return ans;
  
}
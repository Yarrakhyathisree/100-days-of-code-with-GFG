void solve(int start, string out, int n,vector<int>&ans,int val){
    if (n == 0){
        int low=pow(10,val-1);
        int high=pow(10,val);
        if(stoi(out)<high && stoi(out)>=low){
            ans.push_back(stoi(out));
        }
        return;
    }
    for (int i = start; i <= 9; i++){
        string str = out + to_string(i);
        solve(i + 1, str, n - 1,ans,val);
    }
}

    vector<int> increasingNumbers(int N)
    {
        // Write Your Code here
        vector<int>ans;
        if(N==1)ans.push_back(0);
        solve(0,"",N,ans,N);
        return ans;
    }
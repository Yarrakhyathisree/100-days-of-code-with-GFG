lass Solution{
    public:
    string convert(string s, int n) {
        //code
        int val=0;
        
        if(n==1)return s;
        
        string arr[n];
        int flag=1;
        
        for(int i=0;i<s.length();i++){
            arr[val]+=s[i];
            
            if(val==n-1)flag=0;
            
            else if(val==0)flag=1;
            
            (flag)?(val++):(val--);
        }
        
        string ans="";
        
        for(int i=0;i<n;i++){
            ans+=arr[i];
        }
        
        return ans;
    }
};
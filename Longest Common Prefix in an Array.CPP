string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        if(N==1){
            return arr[0];
        }
        
        string a=arr[0];
        string b=arr[N-1];
        
        string ans;
        
        for(int i=0;i<b.length();i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }
            else{
                break;
            }
        }
        if(ans.size()==0){
            return "-1";
        }
        
        return ans;
        
    }
int solve(int A[],int n,int t){
        sort(A,A+n);
        
        in ans=0;
        
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(A[i]+A[j]+A[k]>t){
                    k--;
                }
                else{
                    ans+=(k-j);
                    j++;
                }
            }
        }
        return ans;
    }
    int countTriplets(int Arr[], int n, int L, int R) {
        return solve(Arr,n,R)-solve(Arr,n,L-1);
    }
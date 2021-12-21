long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        
        for(int i=0;i<n;i++){
            if(a[i]<0 && k>0){
                a[i]=a[i]*(-1);
                k--;
            }
        }
        
        sort(a,a+n);
            int sum=0;
        
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
        
        if(k>0){
            if(k%2==0){
                return sum;    
            }else{
                return (sum-(2*a[0]));
            }
        }
        
    return sum;
        
    }
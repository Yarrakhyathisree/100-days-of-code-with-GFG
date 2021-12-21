int NthRoot(int n, int m){
	    int x;
	    x=round(pow(m,1.0/n));
        if(pow(x,n)==m)
        {
            return x;
        }
        return -1;
	}  
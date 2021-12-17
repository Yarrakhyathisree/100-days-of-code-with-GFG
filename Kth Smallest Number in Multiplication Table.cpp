int KthSmallest(int m, int n, int k) {
        int left = 1; 
        int right = m * n;
        while (left < right) {
            int middle = left + (right - left) / 2;
            
            int count = 0;
            for (int i = 1; i <= m; i++) {
                count += min(middle / i, n);
            }
            if(count < k) left = middle + 1;
            else right = middle;
        }
        return left;
    }
};
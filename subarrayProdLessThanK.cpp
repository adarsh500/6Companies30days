int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0, j = 0;
        long long int prod = 1;
        for(int i = 0; i < n; i++){
            prod *= a[i];
            while(j < n && prod >= k){
                prod /= a[j++];
            }
            
            ans += (i - j) + 1;
            
        }
        return ans;
    }
ull getNthUglyNo(int n) {
   ull dp[n + 1];
   dp[1] = 1;
   
   int pos2 = 1, pos3 = 1, pos5 = 1;
   for(int i = 2; i <= n; i++){
       ull f2 = 2 * dp[pos2];
       ull f3 = 3 * dp[pos3];
       ull f5 = 5 * dp[pos5];
       
       ull smallest = min({f2, f3, f5});
       dp[i] = smallest;
       if (smallest == f2){
           pos2++;
       }
       if (smallest == f3){
           pos3++;
       }
       if (smallest == f5){
           pos5++;
       }
   }
   return dp[n];
}
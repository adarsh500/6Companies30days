bool canPair(vector<int> nums, int k) {
map<int, int> m;
for(int i = 0; i < nums.size(); i++){
    m[nums[i] % k]++;
}

for(int i = 0; i < nums.size(); i++){
    int r = nums[i] % k;
    if (r == 0){
        if (m[0] & 1){
            return 0;
        }
    } else if (m[r] != m[k - r]){
        return 0;
    }
}
        
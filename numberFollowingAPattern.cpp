string printMinNumberForPattern(string S){
    string ans;
    stack<int> st;
    for(int i = 0; i <= S.length(); i++){
        st.push(i + 1);
        
        if (S[i] == 'I' || i == S.length()){
            while(!st.empty()){
                ans += to_string(st.top());
                st.pop();
            }
        }
    }
    return ans;
}
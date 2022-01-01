class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> m;
        
        for(int i = 0; i < string_list.size(); i++){
            string word = string_list[i];
            sort(word.begin(), word.end());
            m[word].push_back(string_list[i]);
        }
        
        for(auto p : m){
            output.push_back(p.second);
        }
        
        return output;
    }
};
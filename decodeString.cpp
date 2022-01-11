class Solution{
    string decode(string &s, int &i){
        string result;
        int n = s.length();
        while(i < n && s[i] != ']'){
            if (!isdigit(s[i])){
                result += s[i++];
            } else {
                int n = 0;
                while(i < s.length() and isdigit(s[i])){
                     n = n * 10 + s[i++] - '0';
                }
                i++;
                string temp = decode(s, i);
                i++;
                    
                while(n--){
                    result += temp;
                }   
            }
        }
        return result;
    }
public:
    string decodedString(string s){
        int i = 0;
        return decode(s, i);
    }
};      
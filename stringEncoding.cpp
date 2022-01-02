string encode(string src)
{     
    string output = "";
    for(int i = 0; i < src.length(); i++){
        char ch = src[i];
        int j = i + 1, count = 1;
        while(j < src.length() && src[j] == ch){
            count++;
            j++;
        }
        output += src[i] + to_string(count);
        i = j - 1;
    }
    return output;
}   
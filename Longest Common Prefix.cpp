class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty() || strs[0].empty()){
            return "";
        }
        string prefix = "";
        for(int i = 0; i < strs[0].length(); i++){
            char currentChar = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(i >= strs[j].length() || strs[j][i] != currentChar){
                    return prefix;
                }
            }
            prefix += currentChar;
        }
        return prefix;
    }

};

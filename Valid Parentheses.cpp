class Solution {
public:
    bool isValid(string s) {
        if(s.empty()){
            return true;
        }
        else if(s.length() % 2 != 0){
            return false;
        }
        else{
            static const unordered_map<char, char> brackets = {
                {')', '('},
                {']', '['},
                {'}', '{'}
            };
            stack<char> openings;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                    openings.push(s[i]);
                }
                else{
                    char counterPart = brackets.at(s[i]);
                    if(openings.empty() || counterPart != openings.top()){
                        return false;
                    }
                    else{
                        openings.pop();
                    }
                }
            }
            return openings.empty();
        }
    }
};
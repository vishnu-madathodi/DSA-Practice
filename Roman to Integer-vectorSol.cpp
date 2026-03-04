class Solution {
public:
    int romanToInt(string s) {
        vector<char> number(s.begin(), s.end());
        unordered_map<char, int> presetValues = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500}, 
            {'M', 1000}
        };
        int num = 0, length = s.length();
        for(int i = 0; i < length; i++){
            if(i + 1 < length && presetValues[number[i]] < presetValues[number[i+1]]){
                num -= presetValues[number[i]];
            }
            else{
                num += presetValues[number[i]];
            }
        }
        return num;
    }

};




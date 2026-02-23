class Solution {
public:
    int romanToInt(string s) {
        vector<char> number(s.begin(), s.end());
        int presetValues[128]; //128 to accomodate the ASCII values of the alphabets
        presetValues['I'] = 1;
        presetValues['V'] = 5;
        presetValues['X'] = 10;
        presetValues['L'] = 50;
        presetValues['C'] = 100;
        presetValues['D'] = 500;
        presetValues['M'] = 1000;
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
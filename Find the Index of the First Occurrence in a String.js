class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag = 0, i = 0, nLength = needle.length(), hLength = haystack.length();
        string temp;

        if(nLength > hLength) return -1;

        for(i = 0; i <= hLength - nLength; i++){
            temp = haystack.substr(i, nLength);
            if(temp == needle){
                return i;
            }
        }
        return -1;
    }
};
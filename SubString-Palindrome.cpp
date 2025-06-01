//find palindrome substring
 string Solution::longestPalindrome(string A) {
    string temp = A;
    reverse(temp.begin(), temp.end());
    if(temp == A){
        return A;
    }
    int len = A.length();
    int maxLength = 0;
    string subStr = "";
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            string sub = A.substr(i, (j-i)+1);
            string reversed = sub;
            reverse(reversed.begin(),  reversed.end());
            if(reversed==sub && sub.length() > maxLength){
                maxLength = sub.length();
                subStr = sub;
            }
        }
    }
    return subStr;
}
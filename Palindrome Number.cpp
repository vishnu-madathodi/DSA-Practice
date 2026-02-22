class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false; 
        }
        else{
            long long reverse = 0, temp = x;
            long long bigX = (long long)x;
            while(temp != 0){
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
            if(reverse == bigX){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
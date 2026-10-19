class Solution {
public:
    string addBinary(string a, string b) {
        string sum = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry){
            int total = carry;
            if(i >= 0){
                total += a[i] - '0';
                i--;
            }
            if(j >= 0){
                total += b[j] - '0';
                j--;
            }

            sum += total % 2 + '0';
            carry = total / 2;
        }

        reverse(sum.begin(), sum.end());
        return sum;
        
    }
};
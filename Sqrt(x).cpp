class Solution {
public:
    int mySqrt(int x) {
        int num = 0;
        long long int start = 2, end = x;
        if(x == 0){
            return 0;
        }
        if(x == 1 || x == 2 || x == 3){
            return 1;
        }
        while(start <= end){
            long long int mid = (start + end) / 2;
            long long sq = mid * mid;
            if(sq == x){
                return mid;
            }
            else if(sq > x){
                end = mid -1;
            }
            else if(sq < x){
                num = mid;
                start = mid + 1;
            }
        }
        return num;
    }
};
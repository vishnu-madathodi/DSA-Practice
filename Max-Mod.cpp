int Solution::solve(vector<int> &A) {
    
    int maxGroot = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A.size(); j++){
            if(i !=j && A[j] !=0){
                if(A[i] % A[j] > maxGroot){
                    maxGroot = A[i] % A[j];
                }
            }
        }
    }
    return maxGroot;
}

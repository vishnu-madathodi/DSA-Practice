//sub vector of length B and sum C 
int Solution::solve(vector<int> &A, int B, int C) {
    if(A.size() < B){
        return 0;
    }
    int sum=0;
    //find sum of first B elements
    for(int i=0; i<B; i++){
        sum+=A[i];
    }
    if(sum == C){
        return 1;
    }
    for(int i=B; i<(int)A.size(); i++){
        sum+=A[i]-A[i-B];
        if(sum == C){
            return 1;
        }
    }
    return 0;
}
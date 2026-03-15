int Solution::solve(string A) {

    //we have an array, need to find the absolute min distance between x and 0

    int n = A.length();
    int prefix[n], suffix[n], distance=-1;
    int lastX = -1, firstX = -1;
    int leftDistance = 0, rightDistance = 0;

    for(int i = 0; i < n; i++){
        if(A[i] == 'x'){
            lastX = i;
        }
        prefix[i] = lastX;
    }

    if(lastX == -1){
        return -1;
    }

    for(int i = n-1; i >= 0; i--){
        if(A[i] == 'x'){
            firstX = i;
        }
        suffix[i] = firstX;
    }

    for(int i = 0; i < n; i++){
        if(A[i] == 'o'){
            leftDistance = INT_MAX;
            rightDistance = INT_MAX;
            if(prefix[i] != -1){
                leftDistance = abs(i - prefix[i]);
            }
            if(suffix[i] != -1){
                rightDistance = abs(i - suffix[i]);
            }
            int minDistance = min(leftDistance, rightDistance);
            if(distance == -1){
                distance = minDistance;
            }
            else{
                distance = min(distance, minDistance);
            }

        }
    }

    return distance; 
}

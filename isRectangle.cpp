int Solution::solve(int A, int B, int C, int D) {
    std::vector<int> sides = {A, B, C, D};
    std::sort(sides.begin(), sides.end());

    if(sides[0] == sides[1] && sides[2] == sides[3]){
        return 1;
    }
    else{
        return 0;
    }
}
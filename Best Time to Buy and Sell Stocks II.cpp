int Solution::maxProfit(const vector<int> &A) {
    int mitn = INT_MAX;
    int ans = 0;
    for(int i=0;i<A.size();i++){
        if(mitn>A[i])
        {
            mitn = A[i];
        }
        if(A[i]-mitn>0){
            ans+=A[i]-mitn;
            mitn = A[i];
        }
    }
    return ans;
}

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long i=0, j=i+m-1;
        long long min_dif = LONG_LONG_MAX;
        while(j<n){
            min_dif = min(min_dif, a[j]-a[i]);
            i++,j++;
        }
    return min_dif;
    }   
};
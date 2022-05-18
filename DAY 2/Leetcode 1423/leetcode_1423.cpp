class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int size = cardPoints.size();
        int sum = 0;
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
        
        int max_points = sum;
        int j = size-1;
        
        for(int i=k-1; i>=0; i--){
            sum=sum+cardPoints[j]-cardPoints[i];
            max_points = max(max_points,sum);
            j--;
        }
        return max_points;
    }
};

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int size = nums.size();
        if(size==1){
            return 0;
        }
        int count = 1;
        int mini = INT_MAX;
        int sum = 0;
        
        for(int i=0; i<size; i++){
            mini = min(mini, nums[i]);
            sum += nums[i];
            if(i!=0 && nums[0]==nums[i]){
                count++;
            }
        }
        if(count==size){
            return 0;
        }
        
        
        return sum-size*mini;
        
    }
};
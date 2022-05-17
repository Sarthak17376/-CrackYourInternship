class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        if(size==0 || size==1){
            return {};
        }
        
        for(int i=0; i<size; i++){
            if(nums[abs(nums[i])-1]<0){
                ans.emplace_back(abs(nums[i]));
            }
            else{
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            }
        }
        return ans;
    }
};
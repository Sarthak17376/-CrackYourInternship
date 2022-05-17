class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        
        for(auto it:nums){
            m[it]++;
        }
        
        for(int i=0; i<nums.size(); i++){
            int req = target-nums[i];
            if(m.find(req)!=m.end()){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]==req){
                        return {i,j};
                    }
                }
            }
        }
        return {};
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it:nums){
            m[it]++;
            if(m[it]>nums.size()/2){
                return it;
            }
        }
        return 0;
    }
};
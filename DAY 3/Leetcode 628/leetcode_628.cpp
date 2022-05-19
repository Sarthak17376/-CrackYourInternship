class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==3){
            return (nums[0]*nums[1]*nums[2]);
        }
        
        sort(nums.begin(),nums.end());
        
        int product_with_negative = nums[1]*nums[0]*nums[n-1];
        int product_with_no_negative = nums[n-1]*nums[n-2]*nums[n-3];
        
        return max(product_with_negative, product_with_no_negative);
    }
};
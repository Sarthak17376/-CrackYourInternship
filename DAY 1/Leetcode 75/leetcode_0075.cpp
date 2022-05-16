class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int zero=0, one=0, two=0;
        for(int i=0; i<size; i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        int j=0;
        while(zero--){
            nums[j]=0;
            j++;
        }
        
        while(one--){
            nums[j]=1;
            j++;
        }
        
        while(two--){
            nums[j]=2;
            j++;
        }
    }
};
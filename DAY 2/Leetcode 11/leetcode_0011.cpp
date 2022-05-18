class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int size = height.size();
        
        int i=0, j=size-1;
        int min_index;
        
        while(i<j){
            if(min(height[i],height[j])==height[i]){
                min_index=i;
            }
            else{
                min_index=j;
            }
            int area = (j-i)*height[min_index];
            maxi = max(area, maxi);
            
            if(min_index == i){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};

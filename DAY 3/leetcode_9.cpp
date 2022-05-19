class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp = x;
        long long reverse = 0;
        
        while(x!=0){
            int q = x%10;
            reverse = reverse*10+q;
            x/=10;
        }
        return reverse==temp;
    }
};
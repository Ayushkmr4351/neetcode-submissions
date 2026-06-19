class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int leftmax = 0;
        int rightmax = 0;

        int l = 0,r = n - 1;
        int ans = 0;

        while(l < r){
            if(height[l] <= height[r]){
                if(height[l] < leftmax){
                    ans += leftmax - height[l];
                }
                else{
                    leftmax = height[l];
                }
                l++;
            }
            else{
                if(height[r] < rightmax){
                    ans += rightmax - height[r];
                }
                else{
                    rightmax = height[r];
                }
                r--;
            }
        }

        return ans;
    }
};

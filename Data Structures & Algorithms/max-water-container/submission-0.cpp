class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n - 1;
        long long maxi = 0;

        while(l < r){
            long long curr = 1ll*min(heights[l],heights[r]) * (r - l);
            maxi = max(curr,maxi);

            if(heights[l] < heights[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxi;
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        int l = 0,r = 0;
        int n = nums.size();

        while(r < n && r <= k){
            mp[nums[r]]++;
            if(mp[nums[r]] > 1) return true;
            r++;
        }

        while(r < n){
            mp[nums[l]]--;
            l++;
            mp[nums[r]]++;

            if(mp[nums[r]] > 1) return true;

            r++;
        }

        return false;
    }
};
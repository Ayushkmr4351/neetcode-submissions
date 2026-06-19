class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;

        map<char,int> mp;

        int l = 0,r = 0;
        int maxi = 0;

        while(r < n){
            mp[s[r]]++;

            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }

            maxi = max(maxi,r - l + 1);

            r++;
        }

        return maxi;
    }
};

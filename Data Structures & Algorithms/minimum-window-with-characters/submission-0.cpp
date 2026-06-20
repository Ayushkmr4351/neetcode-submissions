class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();

        map<char,int> mp;

        int ct = 0;

        for(auto it : t){
            mp[it]++;
        }

        int minlen = INT_MAX;
        int startidx = -1;

        int l = 0, r = 0;

        while(r < m){
            if(mp[s[r]] > 0) ct++;
            mp[s[r]]--;

            while(ct == n){
                if((r - l + 1) < minlen){
                    minlen = r - l + 1;
                    startidx = l;
                }

                if(mp[s[l]] == 0) ct--;

                mp[s[l]]++;
                l++;
            }

            r++;
        }

        if(startidx == -1) return "";
        
        return s.substr(startidx,minlen);
    }
};

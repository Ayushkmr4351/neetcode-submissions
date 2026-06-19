class Solution {
public:
    bool solve(int i,int j,string & s){
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return false;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int i = 0,j = s.size() - 1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return solve(i + 1,j,s) || solve(i,j - 1,s);
            }
        }

        return true;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int nn = t.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(n>nn){
        for(int i = 0 ; i < n ; i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
        }
        else{
            for(int i = 0 ; i < nn ; i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
        }
    }
};

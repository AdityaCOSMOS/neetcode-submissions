class Solution {
   public:
    bool isPalindrome(string s) {
       

        int n = s.length();
        int ans[n];
        int nn = 0;
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                ans[nn] = tolower(s[i]);
                nn++;
            }
        }

        for (int j = 0; j < nn; j++) {
            if (ans[j] != ans[nn - j - 1]) {
                return false;
            }
        }
        return true;
    }
};

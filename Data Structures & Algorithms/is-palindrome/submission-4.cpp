class Solution {
   public:
    bool isPalindrome(string s) {
        string responce;
        for (auto c : s) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                responce += tolower(c);
            }
        }
        string rev = responce;
        reverse(rev.begin(), rev.end());
        cout << responce;
        cout << rev;
        return responce == rev;
    }
};

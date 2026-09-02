class Solution {
public:
    bool isPalindrome(string s) {
        string responce;
        for(auto c:s){
            if(c-65 < 55 && c-65 >= 0||c-48>=0&&c-48<9){
                responce += tolower(c);
            }
        }
        string rev=responce;
        reverse(rev.begin(),rev.end());
        cout<<responce;
        cout<<rev;
        return responce == rev;
    }
};

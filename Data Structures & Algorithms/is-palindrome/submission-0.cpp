class Solution {
public:
    bool isPalindrome(string s) {
        string t;
     for (char c : s) {
         if (isalnum(c)) t += tolower(c);
      }
        string reverse=t;
        int l=0; int r=t.size()-1;
        while(l<r){
            swap(reverse[l],reverse[r]);
            l++;
            r--;
        }
        if(t==reverse)return true;
        return false;
    }
};

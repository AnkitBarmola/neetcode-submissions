class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash1;
        unordered_map<char,int> hash2;
        for(char ch:s){
            hash1[ch]++;
        }
         for( char ch:t){
            hash2[ch]++;
        }
        if(hash1==hash2){
            return true;
        }
        return false;
    }
};

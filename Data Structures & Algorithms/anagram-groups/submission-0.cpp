class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        for(auto&pair:mp){
            answer.push_back(move(pair.second));
        }
         return answer;
    }
};

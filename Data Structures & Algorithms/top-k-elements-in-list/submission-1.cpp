class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
      
    vector<vector<int>> bucket(nums.size() + 1);
    for (auto& p : mp) bucket[p.second].push_back(p.first);

    vector<int> ans;
    for (int f = nums.size(); f >= 1 && ans.size() < k; f--)
        for (int num : bucket[f])
            if (ans.size() < k) ans.push_back(num);
    return ans;
    }
};

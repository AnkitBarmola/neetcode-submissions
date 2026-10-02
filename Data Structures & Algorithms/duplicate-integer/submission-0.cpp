class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        for (int num : nums) {
            if (hashMap.find(num) != hashMap.end()) {
                return true;
            }
            hashMap[num]++;
        }
        return false;
    }
};
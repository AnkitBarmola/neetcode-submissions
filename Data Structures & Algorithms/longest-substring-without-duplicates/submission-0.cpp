class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left = 0, best = 0;

        for (int right = 0; right < s.size(); right++) {
            while (window.count(s[right])) {   // duplicate in window, shrink from the left
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            best = max(best, right - left + 1);
        }
        return best;
    }
};
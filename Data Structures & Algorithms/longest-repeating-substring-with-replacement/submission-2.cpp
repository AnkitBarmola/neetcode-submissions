class Solution {
public:
    int characterReplacement(string s, int k) {
        int cnt[26] = {0};
        int left = 0, best = 0;

        for (int right = 0; right < s.size(); right++) {
            cnt[s[right] - 'A']++;

            int maxFreq = 0;
            for (int i = 0; i < 26; i++) maxFreq = max(maxFreq, cnt[i]);

            while ((right - left + 1) - maxFreq > k) {   // too many replacements needed
                cnt[s[left] - 'A']--;
                left++;
                maxFreq = 0;
                for (int i = 0; i < 26; i++) maxFreq = max(maxFreq, cnt[i]);
            }
            best = max(best, right - left + 1);
        }
        return best;
    }
};
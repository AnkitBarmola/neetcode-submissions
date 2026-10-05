class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int best=0;
        for(int x:st){
            if(st.count(x-1)) continue;
            int current=x;
            int len=1;
            while(st.count(current+1)){
                current++;
                len++;
            }
            best=max(best,len);
        }
        return best;
        
    }
};

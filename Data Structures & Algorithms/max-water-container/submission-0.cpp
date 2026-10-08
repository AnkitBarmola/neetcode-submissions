class Solution {
public:
    int maxArea(vector<int>& heights) {
        int answer=0;
        int prev=0;
        int n=heights.size();
        int left=0;int right=n-1;
        while(left<right){
            int height=min(heights[left],heights[right]);
            int width=right-left;
            int area=height*width;
            answer=max(area,answer);
            if(heights[left]<heights[right]) left++;
            else right--;

        }
        return answer;
     }
};

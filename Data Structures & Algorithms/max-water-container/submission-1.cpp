class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0,r=heights.size()-1;
        while(l<r){
            int vumi=r-l;
            int ucchota=min(heights[l],heights[r]);
            int area=vumi*ucchota;
            ans=max(ans,area);

            if(heights[l]<heights[r]){
                l++;
            }
            else r--;

        }
        return ans;
    }
};

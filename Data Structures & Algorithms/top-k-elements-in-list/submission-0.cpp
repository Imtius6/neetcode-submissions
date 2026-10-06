class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>ump;
        for(auto x:nums){
            ump[x]++;
        }
        vector<vector<int>>temp(nums.size() + 1);
        for(auto [element,freq]:ump){
            temp[freq].push_back(element);
        }
         vector<int>res;
        for(int i=temp.size()-1; i>=0; i--){
            for(auto nums:temp[i]){
            res.push_back(nums);
            if(res.size()==k){
                return res;
            }
            }
        }
        return res;
    }
};

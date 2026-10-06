class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp;
       for(int i=0; i<nums.size(); i++){
        int finds=target-nums[i];
        if(mp.find(finds)!= mp.end()){
            return {mp[finds],i};
        }
        mp[nums[i]]=i;

       } 
    }
};

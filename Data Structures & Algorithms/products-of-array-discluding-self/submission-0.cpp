class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int pre=1;
         vector<int>res(nums.size());

         for(int i=0; i<nums.size(); i++){
            res[i]=pre;
            pre*=nums[i];
         }
         int suff=1;
          for(int i=nums.size()-1; i>=0; i--){
            res[i]*=suff;
            suff*=nums[i];
         }

         return res;

    }
};

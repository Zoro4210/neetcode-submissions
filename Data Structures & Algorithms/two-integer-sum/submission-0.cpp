class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>mp;
      int n=nums.size();
      int val=0;
      for(int i=0;i<n;i++){
        val=target-nums[i];
        if(mp.find(val)!=mp.end()){
            return {mp[val],i};
        }
        else{
            mp[nums[i]]=i;
        }
      }
      return {};  
    }
};

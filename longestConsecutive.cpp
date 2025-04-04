class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
             return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxcount = 1;
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
               continue;
            }
            else if(nums[i]+1 == nums[i+1]){
                count++;
            }
            else{
                maxcount = max(count,maxcount);
                count = 1;
            }
        }
        maxcount = max(count,maxcount);
        return maxcount;
    }
};

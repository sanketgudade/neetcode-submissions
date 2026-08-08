class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int global_max=1;
        int counter=1;

        sort(nums.begin(),nums.end());
        if(n<=0) return 0;

        for(int i=1;i<n;i++){
        // if same element then it should not ount multiple times

        if(nums[i-1]==nums[i]) continue;

        if(nums[i]==nums[i-1]+1)
          {
            counter++;
          }
        else{
            counter=1;
        }  
         global_max = max(global_max, counter);
        }
     return global_max;   
    }
};

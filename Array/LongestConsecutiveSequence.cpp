class Solution {
    
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if(n=0){
            count=0;
            return count;
        }
        else{
        for (int i = 0; i < n - 1; i++) {
            /* code */
            if (nums[i + 1] - nums[i] == 1)
                count++;
        }
         

        }
        return count;
       
       
    }
};
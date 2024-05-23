// problem link
// https://leetcode.com/problems/longest-harmonious-subsequence/description/


class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int s = 0, n = nums.size(),e;
        int len = 1;

        for(e = 1;e < n;e++){
            if((nums[e] - nums[s]) > 1){
                while((nums[e] - nums[s]) > 1 ){
                    s++;
                }
            }
            if(nums[e] - nums[s] == 1)
            {
                if(len < (e - s + 1)){
                    len = e - s + 1;
                }
            }
        }

        if(e < n && s < e && len < (e - s + 1) && (nums[e] - nums[s] == 1)){
            len = e - s + 1;
        }

        if(len == 1){
            return 0;
        }else{
            return len;
        }

    }
};

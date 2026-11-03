class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxval=*max_element(nums.begin(), nums.end());
        int cnt=0;
        for(int i=0; i<nums.size(); i++)
            cnt+=maxval-nums[i];
        return cnt;
    }
};

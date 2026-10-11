class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            int j=i+1;
            if(n%j==0) res+=nums[i]*nums[i];
        }
        return res;
    }
};

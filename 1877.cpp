//eazy question, sort then compare the sum;
//First submit the time is to slow, then add the dark magic, the time is 90% now.

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
        sort(nums.begin(),nums.end());
        int maxNum = INT_MIN;
        int size = nums.size();
        for(int i=0;i<size/2;i++){
            maxNum = max(maxNum,nums[i]+nums[size-i-1]);
        }
        return maxNum;
    }
};

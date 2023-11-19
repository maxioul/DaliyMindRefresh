class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int height =0;
        int front = nums[0];
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(front == nums[i]){
                ans+=height;
            }else if(front<nums[i]){
                height++;
                front = nums[i];
                ans+=height;
            }
        }
        return ans;
    }
};

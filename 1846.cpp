//Sort first, then get the min of celing and current number.
//if current number is smaller, decrease the celing to current number.

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int ceiling = 1;
        sort(arr.begin(),arr.end());
        for(int i =0;i<arr.size();i++){
            ceiling = min(ceiling,arr[i]);
            ceiling++;
        }
        return ceiling-1;
    }
};

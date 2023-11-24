class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int ans =0;
        for(int i =1;i<piles.size()/3*2;i=i+2){
            ans+=piles[i];
        }
        return ans;
    }

};

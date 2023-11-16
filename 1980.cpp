//Oh, I miss the information of vector size itself.
//So I think my solution should be super slow, somehow it only take 4ms to run.

class Solution {
public:
    string creatString(int num,int mod){
        if(mod == 0){
            return "";
        }
        string ans="";
        if(num/mod == 1){
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
        ans.append(creatString(num%mod, mod/2));
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<string,bool>numsMap;
        for(int i=0;i<nums.size();i++){
            numsMap[nums[i]]=true;
        }
        int mod = pow(2,nums[0].size()-1);
        int size = pow(2,nums[0].size());
        for(int i=0;i<size;i++){
            if(numsMap.find(creatString(i,mod))==numsMap.end()){
                return creatString(i,mod);
            }
        }
        return "0";
    }
};

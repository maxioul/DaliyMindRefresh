//https://leetcode.com/problems/count-number-of-homogenous-substrings/?envType=daily-question&envId=2023-11-09

//At first place, I want to count the length of substrings and use equation to get the ans, however I got a wrong ans at the case of 10000 length of same charater.

//Wy wrong code: 
class Solution {
public:
    int MODEL = pow(10,7)+7;
    int countHomogenous(string s) {
        long long count =0;
        char nowChar=s[0];
        auto now = s.begin();
        long long ans=0;
        while(now!=s.end()){
            if(*now==nowChar){
                count++;
            }else{
                ans = (ans + count%MODEL*((count+1)%MODEL)/2)%MODEL;
                count=1;
                nowChar=*now;
            }
            now++;
        }
        ans = (ans + count%MODEL*((count+1)%MODEL)/2)%MODEL;
        return ans;
    }
};


//THen I checke the solutions, they all use the slide window, which add the current length of substring to the ans. I think my eqution is totally same, but why?
//And I use the same code in the solution summary, it also failed. Maybe long long also overflow?
//Passed code with slide window
class Solution {
public:
    int  mod = 1e9+7;
    int countHomogenous(string s) {
        int n = s.length(), i = 0, ans = 0;
        map<char,int>mp;
        for(int j=0; j<n; j++){
            if(s[j] == s[i]){
                ans += (j-i+1);
                ans = ans%mod;
            }
            else ans++, i = j;
        }
        return ans%mod;
    }
};


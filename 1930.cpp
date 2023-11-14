//At first place, I tried to go through the string. But time limit too long
//Then I tried to go through from a to z, then go through the string between the begin of this char and end of this char.
//Passed but not perfect.
//The perfect way is to find ths all begin and end of chars, then go through from a to z, if other chat begin and end is inside this arrage, just add one.

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        for(int i ='a';i<='z';i++){
            int begin = s.find(i);
            int last = s.find_last_of(i);
            if(begin!=-1&&last!=-1&&begin!=last){
                vector<bool>thisChar(26,false);
                int thisCount=0;
                for(int j = begin+1;j<last;j++){
                    if(thisChar[s[j]-'a']==false){
                        thisChar[s[j]-'a']=true;
                        thisCount++;
                    }
                }
                ans+=thisCount;
            }
        }
        return ans;
    }
};

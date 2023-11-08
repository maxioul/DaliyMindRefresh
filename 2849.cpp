//Problem: https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/description/?envType=daily-question&envId=2023-11-08

//Thinking: The movement has a big freedom, it can move to eight directions, just compare the max length with the time can fix the problem. 
//          The only edge situation is starting point and end point is same and the time is 1, if time is 2 or more, it can go back, if the movement is only four direction, time has to be an even number

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx&&sy==fy&&t==1){
            return false;
        }
        return t>=max(abs(fx-sx),abs(fy-sy));
    }
};

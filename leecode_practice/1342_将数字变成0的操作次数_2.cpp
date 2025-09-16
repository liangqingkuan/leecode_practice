class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num>0){
            ans+=(num&1)+1;
            num>>=1;
        }
        return ans-1>0?ans-1:0;
    }
};
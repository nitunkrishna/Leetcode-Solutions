class Solution {
public:
    bool canAliceWin(int n) {
        int turn=10, cnt=0;
        while(n>=turn)
        {
            n-=turn;
            turn--;
            cnt++;
        }
        return (cnt%2!=0);
    }
};

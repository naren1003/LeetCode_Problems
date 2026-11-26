class Solution {
public:
    bool canAliceWin(int n) {
        // int temp = 10;
        // while(true){
        //     if(n < temp){
        //         temp++;
        //         break;
        //     }
        //     n-=temp;
        //     temp--;
        // }
        // if(temp == 10 ||temp == 8 ||temp == 6 ||temp == 4 ||temp == 2 ||temp == 0) return true;
        // return false;

        int temp = 10;
        bool wins = false;

        while(n >=  temp){
            n-= temp;
            temp--;
            wins = !wins;
        }

        return wins;
    }
};
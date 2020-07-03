class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        if(n==0){//corner case
            return 0;
        }
        while(n){
            if((n-i)<0){
                i--;
                break;
            }
            if((n-i)==0){
                break;
            }
            n=n-i;
            i++;
        } 
        return i;
    }
};

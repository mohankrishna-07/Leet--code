class Solution {
public:
    int guessNumber(int n) {
        int l=0,r=n;

        while(l<=r){
            // Mid is our guessed Number.
            int mid=l+(r-l)/2;

            if(guess(mid)==0) return mid;
            else if(guess(mid)==1) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};
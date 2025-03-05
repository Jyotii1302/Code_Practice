class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;  
        while (n > 1) {
            if (n % 4 != 0) return false;
            n /= 4;
        }
        return true;
    }
        

};

***POWER OF 2 ****
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return 1;
        if(n<=0 || n%2 !=0) return 0;
        while(n>1){
            if(n%2 !=0) return 0;
            n/=2;
        }
        return 1;
        
    }
};

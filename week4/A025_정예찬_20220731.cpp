//https://leetcode.com/problems/power-of-four/submissions/


class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0) return false;
        long product = pow(2,31);
        int n = sqrt(num);
        if(n*n!=num) return false;
        return product%n==0;
    }
};

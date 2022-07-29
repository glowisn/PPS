// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        int i = 1;
        while(true)
        {
            if(i >=46341 || i * i > x){break;} // int 최댓값을 안넘게 처리하였음.
            i++;
        }
        return i - 1;
    }
};


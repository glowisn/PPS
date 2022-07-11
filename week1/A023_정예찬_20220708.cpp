//https://leetcode.com/problems/add-digits/
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return num;
        int dap = num % 9;
        return dap == 0 ? 9 : dap;
    }
};
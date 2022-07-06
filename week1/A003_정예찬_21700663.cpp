#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        digits.back()++;
        for (int i = digits.size() - 1; i >= 0 && digits[i] == 10; i--)
        {
            if (i == 0)
            {
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[i - 1]++;
                digits[i] = 0;
            }
        }
        return digits;
    }
};

int main()
{
    // Test Code
    vector<int> test;
    test.push_back(9);
    test.push_back(9);
    // test.push_back(9);
    Solution solution;
    solution.plusOne(test);

    for (auto i : test)
    {
        cout << i << ",";
    }
    cout << endl;

    return 0;
}
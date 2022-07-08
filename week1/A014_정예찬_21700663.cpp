//https://leetcode.com/problems/summary-ranges/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> answer;
        if(nums.empty())return answer;
        int n = nums.size();
        string temp = "";
        int start = nums[0], end = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (end + 1 == nums[i])
            {
                end = nums[i];
            }
            else
            {
                // PUSH STRING CODE
                if (start == end)
                {
                    answer.push_back(to_string(start));
                }
                else
                {
                    answer.push_back(to_string(start) + "->" + to_string(end));
                }
                start = end = nums[i];
            }
        }
        if (start == end)
        {
            answer.push_back(to_string(start));
        }
        else
        {
            answer.push_back(to_string(start) + "->" + to_string(end));
        }
        return answer;
    }
};

int main()
{
    Solution solution;
    vector<int> test;
    test.push_back(0);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(6);
    test.push_back(8);
    test.push_back(9);
    vector<string> sol = solution.summaryRanges(test);

    cout << "[";
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << ", ";
    }
    cout << "]";

    cout << endl;

    return 0;
}

int i = 0;
// int j = nums.front();
// vector<int> arr;
// for (; i <= nums.size(); i++)
// {
//     if (j == nums[i])
//     {
//         arr.push_back(i);
//         j++;
//     }
//     else if (i != nums[j])
//     {
//         // break here check arr
//         if (arr.size() == 1)
//         {
//             answer.push_back(to_string(arr.front()));
//         }
//         else if (arr.size() >= 2)
//         {
//             string tp = to_string(arr.front());
//             tp += "->";
//             tp += to_string(arr.back());
//             answer.push_back(tp);
//         }
//         else
//         {
//             // Do nothing
//         }
//         arr.clear();
//     }
// }
// if (arr.size() == 1)
//         {
//             answer.push_back(to_string(arr.front()));
//         }
//         else if (arr.size() >= 2)
//         {
//             string tp = to_string(arr.front());
//             tp += "->";
//             tp += to_string(arr.back());
//             answer.push_back(tp);
//         }
//         else
//         {
//             // Do nothing
//         }
//         arr.clear();
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > t;
        vector<int> init;
        init.push_back(1);
        t.push_back(init);

        for (int i = 1; i < numRows; i++)
        {
            vector<int> temp(i + 1, 1);
            for (int j = 1; j < i ; j++)
            {
                temp[j] = t[i-1][j-1] + t[i-1][j];
            }
            t.push_back(temp);
        }

        return t;
    }
};

int main()
{
    // Test Code
    Solution solution;
    vector<vector<int> > sol = solution.generate(5);

    for (int i = 0 ; i < sol.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < sol[i].size(); j++)
        {
            cout << sol[i][j] << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}
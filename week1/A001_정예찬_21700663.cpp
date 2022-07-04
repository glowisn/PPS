#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int contentChildren = 0;
        sort(g.begin(), g.end(),greater<int>());
        sort(s.begin(), s.end(),greater<int>());

        // j is for child, i is for cookie
        for(int i = 0, j= 0; j < g.size() && i < s.size();){
            if(g[j] <= s[i]){
                i++;
                contentChildren++;
            }
            j++;
        }

        return contentChildren;
    }
};

int main()
{
    // Test Code
    vector<int> g;
    g.push_back(1);
    g.push_back(2);
    g.push_back(3);
    vector<int> s;
    s.push_back(1);
    s.push_back(1);

    Solution solution;
    cout << solution.findContentChildren(g, s) << endl;

    return 0;
}

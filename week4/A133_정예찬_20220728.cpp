// https://leetcode.com/problems/capitalize-the-title/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

class Solution
{
public:
    string capitalizeTitle(string title)
    {
        const char separator = ' ';
        vector<string> capitalvec;
        stringstream streamData(title);
        string val;
        while (getline(streamData, val, separator))
        {
            capitalvec.push_back(val);
        }
        for(auto &val : capitalvec)
        {
            transform(val.begin(), val.end(), val.begin(), ::tolower);
            if(val.length() > 2){
                val[0] = toupper(val[0]);
            }
        }
        string capTitle = "";
        for (auto &val : capitalvec)
        {
            // cout << val << endl;
            capTitle.append(val);
            capTitle.append(" ");
        }
        capTitle.pop_back();
        return capTitle;
    }
};

int main()
{
    string title;
    getline(cin, title);
    Solution solution;
    string capTitle = solution.capitalizeTitle(title);
    cout << capTitle << endl;
    return 0;
}
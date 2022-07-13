// https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    string s = "";
    map<char, int> m;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) != m.end())
        {
            m[s[i]]++;
        }
        else
        {
            m[s[i]] = 0;
        }
    }

    char maxChar = ' ';
    int maxValue = -1;
    for(const auto i : m)
    {
        if(maxValue < i.second)
        {
            maxValue = i.second;
            maxChar = i.first;
        }
    }

    int cnt = 0;
    for (auto const i : m)
    {
        if (i.second == maxValue)
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        cout << maxChar << endl;
    }
    else
    {
        cout << "?" << endl;
    }
    return 0;
}

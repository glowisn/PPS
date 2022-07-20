//https://www.acmicpc.net/problem/2822
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int s[8];
    for(int i = 0; i < 8 ; i++)
    {
        cin >> s[i];
    }
    for(int i = 0; i < 3;i++)
    {
        int minind = (min_element(s,s+8) - s);
        s[minind] = 151;
    }
    int ans = 0;
    for(int i = 0; i < 8 ;i++)
    {
        if(s[i] != 151)
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
    for(int i = 0; i < 8 ;i++)
    {
        if(s[i] != 151)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}
// https://www.acmicpc.net/problem/3062
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a;
        cin >> a;
        string sa = to_string(a);
        reverse(sa.begin(),sa.end());
        int ra = stoi(sa);
        int sum = a + ra;
        string ssum = to_string(sum);
        bool isSym = true;
        for(int i = 0; i < ssum.size() / 2; i++)
        {
            if(ssum[i] != ssum[ssum.size() - i - 1])
            {
                isSym = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if(isSym == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

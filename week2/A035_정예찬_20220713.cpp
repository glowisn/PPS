// https://www.acmicpc.net/problem/5355
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double n = 0.0;
        string s;
        cin >> n;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '@':
                n *= 3;
                break;
            case '%':
                n += 5;
                break;
            case '#':
                n -= 7;
                break;
            default:
                break;
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << n << endl;
    }
    return 0;
}

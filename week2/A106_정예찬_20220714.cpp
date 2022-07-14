// https://www.acmicpc.net/problem/3059
#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    int T;
    cin >> T;
    while (T--)
    {
        char *s = new char[1001];
        bool is[26] = {
            false,
        };
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            is[s[i] - 65] = true;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            if (is[i] == false)
            {
                sum += (i + 65);
            }
        }

        cout << sum << endl;
    }
    return 0;
}
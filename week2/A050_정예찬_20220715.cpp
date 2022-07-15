// https://www.acmicpc.net/problem/5598
#include <iostream>
using namespace std;

int main()
{
    char c[1001];
    cin >> c;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] > 67)
        {
            cout << char(c[i] - 3);
        }
        else
        {
            cout << char(c[i] + 23);
        }
    }
    cout << endl;
    return 0;
}

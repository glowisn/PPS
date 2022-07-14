// https://www.acmicpc.net/problem/1193
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    int ori = x;
    int loop = 1;
    while(x > 0)
    {
        x -= loop;
        loop++;
    }
    loop--;
    x += loop;

    if(loop % 2 == 1)
    {
        cout << loop - x + 1 << "/" << x << endl;
    }
    else
    {
        cout << x << "/" << loop - x + 1<< endl;
    }

    return 0;
}

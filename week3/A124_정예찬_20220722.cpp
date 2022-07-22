//https://www.acmicpc.net/problem/11653
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int m = 2;
    while(n != 1)
    {
        if(n % m == 0)
        {
            n /= m;
            cout << m << '\n';
        }
        else
        {
            m++;
        }
    }
    return 0;
}

// https://www.acmicpc.net/problem/17211
#include <iostream>
using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;
    double *g = new double[N];
    double *b = new double[N];
    double gg, gb, bg, bb;
    cin >> gg >> gb >> bg >> bb;
    if (m == 0)
    {
        g[0] = gg;
        b[0] = gb;
    }
    else
    {
        g[0] = bg;
        b[0] = bb;
    }
    for (int i = 1; i < N; i++)
    {
        g[i] = g[i - 1] * gg + b[i - 1] * bg;
        b[i] = b[i - 1] * bb + g[i - 1] * gb;
    }

    cout<<fixed;
    cout.precision(0);

    cout << g[N - 1] * 1000 << endl
         << b[N - 1] * 1000 << endl;
         
    return 0;
}

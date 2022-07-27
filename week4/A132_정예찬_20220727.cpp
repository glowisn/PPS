// https://www.acmicpc.net/problem/1002

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int x1, y1, r1, x2, y2, r2;
    int d, inner, outer;
    while (T--)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x2 - x1) * (x2 -x1) + (y2 - y1) * (y2 -y1);
        inner = (r1 - r2) * (r1 - r2);
        outer = (r1 + r2) * (r1 + r2);
        // cout << " d : " << d << endl;
        if (d == 0)
        {
            if (inner == 0)
                cout << "-1" << endl;
            if (inner != 0)
                cout << "0" << endl;
        }
        else
        {
            if (d == inner || d == outer)
                cout << "1" << endl;
            if (d > inner && d < outer)
                cout << "2" << endl;
            if (d < inner || d > outer)
                cout << "0" << endl;
        }
    }

    return 0;
}

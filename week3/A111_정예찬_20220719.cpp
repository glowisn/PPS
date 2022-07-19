//https://www.acmicpc.net/problem/9546

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while(T--)
    {
        int times;
        cin >> times;
        double p = 0;
        for(int i = 0; i < times; i++){
            p = (p + 0.5) * 2;
        }
        cout << int(p) << endl;
    }
    return 0;
}
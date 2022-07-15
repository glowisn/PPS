// https://www.acmicpc.net/problem/10834
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int M;
    cin >> M;
    int a = 1, r = 0;
    int ia, ib, ir;
    for(int i = 0; i < M; i++){
        cin >> ia >> ib >> ir;
        a /= ia;
        a *= ib;
        r += ir; 
    }
    r %= 2;
    cout << r << " " << a << endl;
    return 0;
}

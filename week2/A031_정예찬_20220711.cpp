//https://www.acmicpc.net/problem/2163
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    if(N < M){
        cout << (N - 1) + N * (M - 1) << endl;
    }
    else
    {
        cout << (M - 1) + M * (N - 1) << endl;
    }
    return 0;
}

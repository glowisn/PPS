//https://www.acmicpc.net/problem/2217
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int *w = new int[N];
    for(int i = 0; i< N; i++)
    {  
        cin >> w[i];
    }
    sort(w, w+N, greater<int>());
    long long maxw = -1;
    int cnt = 1;
    for(;cnt <= N;cnt++)
    {
        if(maxw <= w[cnt - 1] * cnt)
        {
            maxw = w[cnt - 1] * cnt;
        }
    }

    cout << maxw << endl;
    return 0;
}

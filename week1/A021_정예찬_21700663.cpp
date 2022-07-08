//https://www.acmicpc.net/problem/2010
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *plugs = new int[N];
    int maxp =0;
    for(int i = 0; i < N;i++){
        cin >> plugs[i];
        maxp += (plugs[i] - 1);
    }
    cout << maxp + 1 << endl;
    
    return 0;
}

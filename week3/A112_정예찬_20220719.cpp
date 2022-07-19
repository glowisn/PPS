//https://www.acmicpc.net/problem/1049

#include <iostream>
#include <vector>
#define pack 6

using namespace std;

int main(int argc, char const *argv[])
{
    int N = 0, M = 0, x = 0, y = 0;
    int set = 1000, single = 1000;
    cin >> N >> M;

    while(M--) {
        cin >> x >> y;
        set = min(set, x);
        single = min(single, y);
    }
	
    cout << min((N/pack+1)*set, min(N/pack*set + N%pack*single, N*single)) << '\n';
    
    return 0;
}
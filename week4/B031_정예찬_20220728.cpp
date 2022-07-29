//https://www.acmicpc.net/problem/3135

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int a ,b, N;
    cin >> a >> b >> N;
    int *fav = new int[N];
    int button = 1001;
    button = min(button, abs(a-b));
    for(int i = 0; i < N ; i++){
        cin >> fav[i];
        button = min(button, abs(fav[i] - b) + 1);
    }

    cout << button << endl;

    return 0;
}

//https://www.acmicpc.net/problem/10162

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    if(T % 10 != 0){
        cout << "-1" << endl;
        return 0;
    }
    cout << T / 300 << " " << (T % 300) / 60 << " " << ((T % 300) % 60 ) / 10 << endl;
    return 0;
}

//https://www.acmicpc.net/problem/9095
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int arr[11];
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4; i <= 10 ; i++){
        arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
    }
    while(T--)
    {
        int test;
        cin >> test;
        cout << arr[test] << endl;
    }
    return 0;
}

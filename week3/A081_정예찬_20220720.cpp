// https://www.acmicpc.net/problem/2693
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        int arr[10];
        for(int i = 0 ; i < 10 ;i++)
        {
            cin >> arr[i];
        }
        int maxInd;
        for(int i = 0; i < 2 ; i++)
        {
            maxInd = max_element(arr,arr+10) - arr;
            arr[maxInd] = 0;
        }
        int max = *max_element(arr,arr+10);
        cout << max << endl;
    }
    return 0;
}

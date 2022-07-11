//https://www.acmicpc.net/problem/1026
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *a = new int[N];
    int *b = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    } for(int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    sort(a,a + N);
    sort(b,b + N, greater<int>());
    int sum = 0;
    for(int i = 0; i < N ;i++){
        sum += a[i] * b[i];
    }
    cout << sum << endl;
    return 0;
}

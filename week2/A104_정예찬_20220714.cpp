//https://www.acmicpc.net/problem/14487

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int *cost = new int[n];
    for(int i = 0; i < n ;i++)
    {
        cin  >> cost[i];
    }
    sort(cost,cost+n);

    int sum = 0;
    for(int i = 0; i < n -1 ;i ++)
    {
        sum += cost[i];
    }
    cout << sum << endl;

    return 0;
}

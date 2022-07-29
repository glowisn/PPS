// https://www.acmicpc.net/problem/9237

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int *trees = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> trees[i];
    }
    sort(trees, trees + N, greater<int>());
    for (int i = 0; i < N; i++)
    {
        trees[i] += (i + 1);
    }

    cout << *max_element(trees,trees + N) + 1 << endl;

    return 0;
}

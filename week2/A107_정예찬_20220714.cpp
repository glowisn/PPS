// https://www.acmicpc.net/problem/1292
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int *arr = new int[b];
    int iter = 1;
    for(int i = 0; i < b;)
    {
        for(int j = 0; j < iter ;j++)
        {
            arr[i] = iter;
            //cout << "arr["<< i <<"] " << arr[i] << " ";
            i++;
        }
        iter++;
    }
    int sum = 0;
    for(int k = (a - 1); k < b;k++)
    {
        sum += arr[k];
    }
    cout << sum << endl;
    return 0;
}

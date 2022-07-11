//https://www.acmicpc.net/problem/1267
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *time = new int[N];

    int Y = 0, G = 0;

    for(int i = 0 ;i < N; i++)
    {
        cin >> time[i];
        Y += (time[i] / 30 + 1) * 10;
        G += (time[i] / 60 + 1) * 15;
    }
    if(Y < G)
    {
        cout << "Y " << Y << endl; 
    }
    else if(Y > G)
    {
        cout << "M " << G << endl;
    }
    else
    {
        cout << "Y M " << Y << endl;
    }
    return 0;
}

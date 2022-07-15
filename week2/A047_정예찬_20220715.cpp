// https://www.acmicpc.net/problem/11721
#include <iostream>
using namespace std;

int main()
{
    char c[101];
    cin >> c;
    int cnt = 1;
    for(int i = 0; c[i] != '\0';i++)
    {
        cout << c[i];
        if(cnt == 10){
            cout << endl;
            cnt = 0;
        }
        cnt++;
    }
    cout << endl;
    return 0;
}

// https://www.acmicpc.net/problem/17210

#include <iostream>
using namespace std;

int main()
{
    unsigned int N;
    int wayF;
    cin >> N >> wayF;

    if(N > 5){
        cout << "Love is open door" << endl;
        return 0;
    }
    for(int i = 0; i < N -1 ; i++)
    {
        wayF = !wayF;
        cout << wayF << endl;
    }

    return 0;
}

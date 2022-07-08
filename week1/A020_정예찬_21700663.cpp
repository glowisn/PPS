#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int in[4], out[4];
    for(int i = 0; i < 4 ;i++)
    {
        cin >> out[i] >> in[i];
    }
    int maxp = 0;
    int curr = 0;
    for(int i = 0; i < 4; i++)
    {
        curr += (in[i] - out[i]);
        maxp = max(maxp, curr);
    }

    cout << maxp << endl;
    
    return 0;
}

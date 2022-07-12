//https://www.acmicpc.net/problem/3052
#include <iostream>
#include <map>
using namespace std;
#define DIV 42;

int main(int argc, char const *argv[])
{
    int n[10];
    map<int,int> m;
    for(int i = 0 ; i < 10 ;i++)
    {
        int di;
        cin >> n[i];
        di = n[i] % DIV;
        if(m.find(di) != m.end())
        {
            //pass
        }
        else
        {
            m[di] = 1;
        }
    }
    cout << m.size() << endl;
    return 0;
}

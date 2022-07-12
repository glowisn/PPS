//https://www.acmicpc.net/problem/1159
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<char,int> ma;
    map<char,int>::iterator itr;
    for(int i = 0; i < N ; i++)
    {
        char input[30];
        cin >> input;
        if(ma.find(input[0]) != ma.end())
        {
            ma[input[0]]++;
        }
        else{
            ma[input[0]] = 1;
        }
    }
    int count = 0;
    for(itr = ma.begin();itr != ma.end();++itr)
    {
        if(itr->second >= 5)
        {
            count++;
            cout << itr->first;
        }
    }
    if(count == 0)
    {
        cout << "PREDAJA";
    }
    cout << endl;
    return 0;
}

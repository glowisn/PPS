//https://www.acmicpc.net/problem/10814
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int,string> a,pair<int,string> b)
{
    return a.first < b.first;
}


int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    pair<int, string> p;
    vector<pair<int, string> > vec;
    while(T--)
    {
        cin >> p.first >> p.second;
        vec.push_back(p);
    }

    stable_sort(vec.begin(),vec.end(),compare);

    for(int i = 0; i < vec.size();i++)
    {
        cout << vec[i].first << ' ' << vec[i].second << '\n'; // endl 보다 속도 빠른 \n 사용
    }
    return 0;
}

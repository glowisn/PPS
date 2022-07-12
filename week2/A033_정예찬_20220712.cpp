// https://www.acmicpc.net/problem/2953
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int score[5][4];
    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {   
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> score[i][j];
            sum += score[i][j];
        }
        vec.push_back(sum);
    }
    cout << max_element(vec.begin(),vec.end()) - vec.begin() + 1 << " " << *max_element(vec.begin(),vec.end()) << endl;
    return 0;
}

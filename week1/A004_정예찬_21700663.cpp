//https://school.programmers.co.kr/learn/courses/30/lessons/12910
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> &arr, int divisor)
{
    vector<int> answer;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }

    return answer;
}

int main()
{
    // Test Case
    vector<int> test;
    test.push_back(5);
    test.push_back(9);
    test.push_back(7);
    test.push_back(10);

    vector<int> sol;

    sol = solution(test,5);

    for(auto i : sol){
        cout << sol[i] << ", ";
    }
    cout << endl;

    return 0;
}
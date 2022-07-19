// https://school.programmers.co.kr/learn/courses/30/lessons/42889
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    vector<double> rate;
    double user = stages.size();

    for(int i = 1; i <= N; i++)
    {
        double cnt = 0;

        for(int j = 0 ; j < stages.size(); j++)
        {
            if(stages[j] == i)
            {
                cnt++;
            }
        }
        if(cnt == 0) rate.push_back(0);
        else rate.push_back(cnt / user);
        user -= cnt;
    }

    for(int i = 0; i < N ; i++)
    {
        auto itr = max_element(rate.begin(), rate.end());
        answer.push_back(itr - rate.begin() + 1);
        *itr = -1;
    }
    return answer;
}

int main(int argc, char const *argv[])
{
    return 0;
}

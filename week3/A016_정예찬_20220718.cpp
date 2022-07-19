// https://school.programmers.co.kr/learn/courses/30/lessons/42885
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// limit에서 빼는 알고리즘이 아닌 head+ tail을 더하는 알고리즘

int solution(vector<int> people, int limit) {
    int answer = 0;
    int head = 0, tail = people.size()-1;
    sort(people.begin(), people.end());

    while(head <= tail){
        if(people[head] + people[tail] <= limit){ 
            head++; 
            tail--;
        }else{ 
            tail--;
        }
        answer++;
    }
    return answer;
}


int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(70);
    v.push_back(50);
    v.push_back(80);
    v.push_back(50);
    cout << solution(v,100) << endl;
    return 0;
}

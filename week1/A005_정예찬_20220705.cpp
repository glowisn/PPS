//https://programmers.co.kr/learn/courses/30/lessons/49993
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> map;
    for(int i = 0;i < skill.length();i++){
        map[skill[i]] = i + 1;
    }
    for(auto skill_tree : skill_trees)
    {
        int check = 1;
        bool isOK = true;
        for(int i = 0; i < skill_tree.length();i++){
            if(map[skill_tree[i]] == check){
                check++;
                continue;
            }
            else if(map[skill_tree[i]] > check){
                isOK = false;
                break;
            }
        }
        if(isOK) answer++;
    }

    return answer;
}

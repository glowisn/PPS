#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0, yCount = 0;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for_each(s.begin(),s.end(), [](char & c){
        c = tolower(c);
    });
    for(int i = 0; i < s.length();i++){
        if(s[i] == 'p') pCount++;
        if(s[i] == 'y') yCount++;
    }

    if( pCount != yCount) answer = false;

    return answer;
}
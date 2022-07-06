#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int length = s.length();
    if(length != 4 && length != 6)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        if(isdigit(s[i]) == 0){
            return false;
        }
    }
    
    return answer;
}
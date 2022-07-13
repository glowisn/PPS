// https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    for(int i=0; i<s.size(); i++){
        if((isalpha(s[i]) && s[i-1] == ' ')  || (isalpha(s[i]) && i==0)){
            s[i]=(toupper(s[i]));
        }else{
          s[i] = tolower(s[i]);  
        }
        
    }
    answer = s;
    return answer;
}
// https://www.acmicpc.net/problem/1541

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    string word = "";
    bool isMinus = false;
    cin >> str;
    int answer = 0;
    for(int i = 0; i <= str.size();i++)
    {
        if(str[i]=='+' || str[i]=='-' || str[i]=='\0') {
            if (isMinus) {
                answer-=stoi(word);
            } else {
                answer+=stoi(word);
            }
            word="";
            if(str[i]=='-') {
                isMinus=true;
            }
        } else {
            word+=str[i];
        }
    }

    cout << answer << endl;
    return 0;
}

// https://www.acmicpc.net/problem/4949
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int tmp;
    while (true)
    {
        stack<int> sp;
        bool isbal = true;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                sp.push(1);
            }
            else if (s[i] == '[')
            {
                sp.push(2);
            }
            else if (s[i] == ')')
            {
                if(sp.empty())
                {
                    isbal = false;
                    break;
                }
                tmp = sp.top();
                if (tmp == 1)
                {
                    sp.pop();
                    continue;
                }
                else
                {
                    isbal = false;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if(sp.empty())
                {
                    isbal = false;
                    break;
                }
                tmp = sp.top();
                if (tmp == 2)
                {
                    sp.pop();
                    continue;
                }
                else
                {
                    isbal = false;
                    break;
                }
            }
        }
        if(isbal == true && sp.empty())
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}

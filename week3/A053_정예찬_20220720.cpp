//https://www.acmicpc.net/problem/10828
// make stack

#include <iostream>
#include <vector>
#include <string>

using namespace std; 
int main(int argc, char const *argv[])
{   
    vector<int> stack;
    int T;
    cin >> T;
    while(T--)
    {
        string input;
        cin >> input;
        if(input == "push")
        {
            int number;
            cin >> number;
            stack.push_back(number);
        }
        else if(input == "pop")
        {
            if(stack.empty())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        }
        else if(input == "size")
        {
            cout << stack.size() << endl;
        }
        else if(input == "empty")
        {
            cout << stack.empty() << endl;
        }
        else if(input == "top")
        {
            if(stack.empty())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << stack.back() << endl;
            }
        }
    }
    return 0;
}
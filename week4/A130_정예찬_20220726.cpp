// https://www.acmicpc.net/problem/10773
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char **argv)
{
    unsigned int sum = 0;
    int K;
    cin >> K;
    int i;
    stack<int> s;
    while (K--)
    {
        cin >> i;
        if (i == 0)
        {
            sum -= s.top();
            s.pop();
        }
        else
        {  
            s.push(i);
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
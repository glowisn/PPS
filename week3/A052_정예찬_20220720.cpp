//https://www.acmicpc.net/problem/8958
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while(T--)
    {
        char input[80];
        int score = 0;
        int con = 0;
        cin >> input;
        for(int i = 0; input[i] != '\0';i++)
        {
            if(input[i] == 'O')
            {
                con++;
                score += con;
            }
            else if(input[i] == 'X')
            {
                con = 0;
            }
            else
            {
                cout << "Wrong Input!" << endl;
                return 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}

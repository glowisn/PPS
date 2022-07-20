//https://www.acmicpc.net/problem/5622

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char input[16];
    cin >> input;
    int sum = 0;
    for(int i = 0; input[i] != '\0';i++)
    {
        if(input[i] <= 'R'){
            // cout << (input[i] - 65) / 3 + 3 << " ";
            sum += (input[i] - 65) / 3 + 3;
        }
        else if(input[i] == 'S')
        {
            // cout << '8' << " ";
            sum += 8;
        }
        else if(input[i] == 'Z')
        {
            // cout << "10" << " ";
            sum += 10;
        }
        else
        {
            // cout << (input[i] - 66) / 3 + 3 << " ";
            sum += (input[i] - 66) / 3 + 3;
        }
    }

    cout << sum << endl;
    return 0;
}

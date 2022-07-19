//https://www.acmicpc.net/problem/1316

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string word[100];
    int count = 0;

    for (int i = 0; i < num; i++)
    {

        bool alpha[26] = {
            false,
        };
        cin >> word[i];
        for (int j = 0; j < word[i].length(); j++)
        {
            while(word[i][j + 1] == word[i][j] && j + 1 < word[i].length()){
                j++;
            }
            if (alpha[word[i][j] - 'a'] == false)
            {
                alpha[word[i][j] - 'a'] = true;
            }
            else
            {
                count++;
                break;
            }
        }
    }

    cout << num - count;

    return 0;
}
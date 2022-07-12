// https://www.acmicpc.net/problem/2775
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int k, n;
        cin >> k >> n;
        int **room = new int *[k + 1];
        for (int i = 0; i <= k; i++)
        {
            room[i] = new int[15];
        }
        for (int i = 0; i <= k; i++)
        {
            for(int j = 1; j <= n;j++)
            {
                if(i==0)
                {
                    room[i][j] = j;
                }
                else if (j==1)
                {
                    room[i][j] = 1;
                }
                else 
                {
                    room[i][j] = room[i][j - 1] + room[i - 1][j];
                }
            }
        }
        cout << room[k][n] << endl;
    }
    return 0;
}

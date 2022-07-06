#include <iostream>
using namespace std;

int main()
{
    int C;
    int score[1001];
    cin >> C;
    int avg;
    int overavg;
    double result;
    for (int c = 0; c < C; c++)
    {
        int N;
        cin >> N;
        avg = 0;
        overavg = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> score[i];
            avg += score[i];
        }
        avg /= N;
        for (int i = 0; i < N; i++)
        {
            if (score[i] > avg)
            {
                overavg++;
            }
        }
        result = (double)overavg / N * 100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
    }
    return 0;
}

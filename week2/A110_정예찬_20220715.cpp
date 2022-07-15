//https://www.acmicpc.net/problem/5585
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    a = 1000 - a;
    int cnt = 0;
    while (a > 0)
    {
        if(a >= 500){a -= 500; cnt++;}
        else if(a >= 100){a -= 100; cnt++;}
        else if(a >= 50){a -= 50; cnt++;}
        else if(a >= 10){a -= 10; cnt++;}
        else if(a >= 5){a -= 5; cnt++;}
        else {a -= 1; cnt++;}
    }
    
    cout << cnt << endl;
    return 0;
}

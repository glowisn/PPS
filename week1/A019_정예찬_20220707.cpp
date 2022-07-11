//https://www.acmicpc.net/problem/2577
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int re = a * b * c;
    int n[10] = {0,};
    while(true){
        n[re%10]++;
        if(re / 10 == 0)break;
        re /= 10;
    }
    for(int i = 0; i < 10 ;i ++){
        cout << n[i] << endl;
    }
    return 0;
}

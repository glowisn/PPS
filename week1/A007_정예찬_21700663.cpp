#include <iostream>
using namespace std;

int main()
{   
    int input[8];
    string answer = "mixed";
    int as = 0, ds = 0;
    for(int i = 0; i < 8; i++){
        cin >> input[i];
    }

    for(int i = 0; i < 8; i++){
        if(input[i] == i+ 1) as++;
    }
    for(int i = 0; i < 8; i++){
        if(input[i] == 8 - i) ds++;
    }

    if(as == 8) answer = "ascending";
    if(ds == 8) answer = "descending";


    cout << answer;
    return 0;
}

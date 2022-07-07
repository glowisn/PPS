#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[5];
    int tp = 0;
    for(int i =0;i <5;i++){
        cin >> num[i];
        tp += num[i] * num[i];
    }  
    cout << tp % 10 << endl;

    return 0;
}

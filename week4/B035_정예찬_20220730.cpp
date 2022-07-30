// https://www.acmicpc.net/problem/11047
#include <iostream>

using std::cin; using std::cout; using std::endl;

int coin[10];

int n;
int greedy(int i);

int main(){
    int k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    cout << greedy(k);
}

int greedy(int m){
    int g = 0;
    for(int i = n-1; i >= 0; i--){
        while(m >= coin[i]){
            m -= coin[i];
            g++;
        }
    }

    return g;
}
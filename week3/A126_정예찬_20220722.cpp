// https://www.acmicpc.net/problem/1065

#include <iostream>

using std::cin; using std::cout; using std::endl;

bool hansu(int i);

int main(){
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 1; i <=a; i++){
        if(hansu(i)){
            cnt++;
        }
    }

    cout << cnt;

}

bool hansu(int i){
    if(i < 100){return true;}
    else{
        int h = i / 100;
        i %= 100;
        int t = i /10;
        i %= 10;
        int o = i;
        if(h - t == t - o){
            return true;
        }
    }
    return false;
}
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    int arr[10] = {0};
    
    while(true){
        arr[n%10]++;
        if(n/10 == 0)break;
        n /= 10; 
    }

    int maxnum = 0;
    for(int i = 0; i < 10 ;i++){
        if(i == 6 || i == 9){
            continue;
        }
        maxnum = max(maxnum,arr[i]);
    }

    cout << max(maxnum, (arr[6] + arr[9] + 1) / 2 ) << endl;

    return 0;
}

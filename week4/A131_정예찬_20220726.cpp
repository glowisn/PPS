//https://www.acmicpc.net/problem/2108
#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int mode(int *num, int n);

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int* arr = new int[N];
    int sum = 0;
    for(int i = 0; i < N ; i ++)
    {
        cin >> arr[i];
        sum += arr[i];
        
    }
    double avg = round(double(sum) / double(N));
    if(avg == -0) avg = 0;
    sort(arr,arr+N);
    int middle = arr[N/2];

    int mod = mode(arr,N);
    int range = arr[N - 1] - arr[0];

    cout << avg << endl << middle << endl << mod << endl << range << endl;

    return 0;
}

int mode(int *num, int n){
    int cnt = 0;
    int ans = 0;
    int temp = num[0];
    int result = num[0];
    bool second = false;
    for (int i = 0; i < n;i++){
        if (temp == num[i]){
            cnt++;
        }
        else{
            if(ans < cnt){
                ans = cnt;
                result = num[i - 1];
                second = false;
            }
            else if(ans == cnt && !second){
                result = num[i - 1];
                second = true;
            }
            cnt = 1;
            temp = num[i];
        }
    }
    if(ans < cnt){
        result = num[n - 1];
    }
    else if(ans == cnt && !second){
        result = num[n - 1];
    }
    return result;
}

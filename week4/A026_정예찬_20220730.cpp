//https://school.programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int div = 0;
    int tm = x;
    while(tm > 0)
    {
        div += tm % 10;
        tm /= 10;
    }
    return x % div == 0 ? true : false;
}
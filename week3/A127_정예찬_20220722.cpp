//https://www.acmicpc.net/problem/1934
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int a, b;
    while(T--)
    {
        cin >> a >> b;
        cout << lcm(a,b) << '\n'; 
    }
    return 0;
}

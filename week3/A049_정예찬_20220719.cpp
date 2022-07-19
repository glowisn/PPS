// https://www.acmicpc.net/problem/4659

#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "end")
            break;

        bool has_vowel = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (is_vowel(s[i]))
            {
                has_vowel = true;
                break;
            }
        }
        if (!has_vowel)
        {
            cout << "<" << s << "> is not acceptable." << endl;
            continue;
        }

        const auto &sz = s.size();
        if (sz >= 3)
        {
            bool flag = true;
            for (int i = 0; i < sz - 2; ++i)
            {
                if (is_vowel(s[i]) == is_vowel(s[i + 1]) && is_vowel(s[i + 1]) == is_vowel(s[i + 2]))
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                cout << "<" << s << "> is not acceptable.\n";
                continue;
            }
        }

        if (sz >= 2)
        {
            bool flag = true;
            for (int i = 0; i < sz - 1; ++i)
            {
                if ((s[i] != 'o' && s[i] != 'e') && s[i] == s[i + 1])
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                cout << "<" << s << "> is not acceptable.\n";
                continue;
            }
        }

        cout << "<" << s << "> is acceptable.\n";
    }
    return 0;
}
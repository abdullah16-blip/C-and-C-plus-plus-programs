//Rabin-Carp algorithm for pattern matching
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string text, pattern;
    int text_value = 0, pattern_value = 0;
    bool flag = false;
    int base = 311;

    cin >> text >> pattern;

    for (a = 0; a < pattern.length(); a++)
    {
        pattern_value = (pattern_value * base) + pattern[a] - '0';
        text_value = (text_value * base) + text[a] - '0';
    }
    if (pattern_value == text_value)
    {
        flag = true;
    }

    for (a = 0; a < text.length() - pattern.length(); a++)
    {
        text_value = (text_value - ((text[a] - '0') * pow(base, pattern.length() - 1))) * base;
        text_value = text_value + (text[a + pattern.length()] - '0');
        if (pattern_value == text_value)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout<<"Match found."<<endl;
    else if (!flag)
        cout<<"No match found."<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void swap(string &str, int first, int last)
{
    char tmp = str[first];
    str[first] = str[last];
    str[last] = tmp;
}

string reverseWord(string str)
{
    int first = 0, last = str.length() - 1;
    while (first < last)
    {
        swap(str, first, last);
        first++;
        last--;
    }
    return str;
}

int main()
{
    string s = "Jangid";
    string s_rev = reverseWord(s);
    cout << s << "\n"
         << s_rev << endl;
}
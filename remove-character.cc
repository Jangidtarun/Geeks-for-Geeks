#include <bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2)
{
    vector<bool> visited_flag(26, false);
    for (char val : string2)
        visited_flag[val - 'a'] = true;

    for (int i = 0; i < string1.length(); i++)
    {
        if (visited_flag[string1[i] - 'a'])
        {
            string1.erase(string1.begin() + i);
            i--;
        }
    }
    return string1;
}

int main()
{
    string s1 = "abelode", s2 = "abl";
    cout << "s1: " << s1 << endl;
    s1 = removeChars(s1, s2);
    cout << "s1: " << s1 << endl;
}
// Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
// NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
 

// Example 1:

// Input:
// string1 = "computer"
// string2 = "cat"
// Output: "ompuer"
// Explanation: After removing characters(c, a, t)
// from string1 we get "ompuer".
// Example 2:

// Input:
// string1 = "occurrence"
// string2 = "car"
// Output: "ouene"
// Explanation: After removing characters
// (c, a, r) from string1 we get "ouene".
 

// Your Task:  
// You dont need to read input or print anything. Complete the function removeChars() which takes string1 and string2 as input parameter and returns the result string after removing characters from string2  from string1.


// Expected Time Complexity:O( |String1| + |String2| )
// Expected Auxiliary Space: O(K),Where K = Constant   


// Constraints:
// 1 <= |String1| , |String2| <= 50

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
    string s1 = "computer", s2 = "hot";
    cout << "s1: " << s1 << endl;
    s1 = removeChars(s1, s2);
    cout << "s1: " << s1 << endl;
}
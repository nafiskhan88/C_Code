// C++ program to check if a string is valid or not.
#include <stdio.h>
using namespace std;

// Function returns 1 when string is valid
// else returns 0
bool checkString(string s)
{
    int len = s.length();

    // Find first occurrence of 1 in s[]
    int first = s.size()+1;
    for (int i = 0; i<len; i++)
    {
        if (s[i] == '1')
        {
            first = i;
            break;
        }
    }

    // Find last occurrence of 1 in s[]
    int last = 0;
    for (int i = len-1; i>= 0; i--)
    {
        if (s[i] == '1')
        {
            last = i;
            break;
        }
    }

    // Check if there is any 0 in range
    for (int i = first; i <= last; i++)
        if (s[i] == '0')
           return false;

    return true;
}

// Driver code
int main()
{
    string s = "000";
    checkString(s)? cout << "VALID\n" :
                    cout << "NOT VALID\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int i = 0;
        string s;
        while (i != str1.length() && i != str2.length())
        {
            if (str1+str2==str2+str1)
            {
                int x=__gcd(str1.size(),str2.size());
                s=str2.substr(0,x);
            }
            else{
                s="";
            }
            i++;
        }
        return s;
    }
};
int main()
{
    Solution s1;
    string S1 = s1.gcdOfStrings("ABABABAB", "ABAB");
    cout << S1;
}
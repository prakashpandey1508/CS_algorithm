#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;

    string result;

    while (i >= 0 || j >= 0 || carry != 0)
    {
        if (i >= 0 && a[i--]=='1')
        {
            carry++;
        
        }
        if (j >= 0  && b[j--]=='1' )
        {
            carry++;
            
        }
        result = ((carry % 2) ? "1" : "0") + result;
        carry /= 2;
    }
    return result;
}

int main()
{
    cout<<addBinary("101","011");

}

#include <bits/stdc++.h>
using namespace std;

int subs(string input, string output[])
{
   if (input.empty())
   {
      output[0] = "";
      return 1;
   }
   string tempstr = input.substr(1);

   int n = subs(tempstr, output);

   for (int i = 0; i < n; i++)
   {
      output[i + n] = input[0] + output[i];
   }
   return 2 * n;
}

int main()
{
   string input;
   cin >> input;

   string *output = new string[40];

   int N = subs(input, output);

   for (int i = 0; i < N; i++)
   {
      cout << output[i] << endl;
   }
}
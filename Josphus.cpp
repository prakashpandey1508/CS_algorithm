#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k) // josphus def.
{
   if (n==1)
      return 0;

   return (jos(n - 1, k) + k) % n;
}

int jos_deq(int n , int k)
{
    deque<int> d;
   for (int i = 0; i < n; i++) 
      d.push_back(i);

   while (d.size() != 1)
   {
      for (int i = 0; i < (k - 1); i++)
      {
         d.push_back(d.front());
         d.pop_front();
      }

      d.pop_front();
   }

   return d.front();
}

int main()
{
   cout << jos(5, 3)<<endl;
   cout << jos_deq(5, 3);
}
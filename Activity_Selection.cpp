#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    fastio
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int, int> activity[n];

        for(int i=0; i<n; i++)
        {
            cin>>activity[i].first;
            cin>>activity[i].second;
        }

        sort(activity, activity+n, cmp);

        int total = 1;
        int chosen = 0;
        for(int i=1; i<n; i++)
        {
            if(activity[i].first >= activity[chosen].second)
            {
                total++;
                chosen = i;
            }
            else
            {
                continue;
            }
        }

        cout<<total<<"\n";
    }
    return 0;
}

#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
typedef long int ll;

int main()
{
    int t;
    fastio
    cin>>t;

    while(t--)
    {
        ll n1, n2, n3;

        cin>>n1>>n2>>n3;

        if ((n1>n2) && (n1<n3))
        cout<<n1<<"\n";
        else if((n1>n3) && (n1<n2))
        cout<<n1<<"\n";
        else if((n2>n1) && (n2<n3))
        cout<<n2<<"\n";
        else if((n2>n3) && (n2<n1))
        cout<<n2<<"\n";
        else
        cout<<n3<<"\n";
    }
    return 0;
}
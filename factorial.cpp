#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int multiply(int x, int res[], int res_size)
{
    int prod = 0;
    int carry = 0;

    for(int i=0; i<res_size; i++)
    {
        prod = res[i]*x + carry;
        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry>0)
    {
        res[res_size++] = carry%10;
        carry = carry/10;
    }

    return res_size;
}
void factorial(int n)
{
    int arr[2000] = {0};
    arr[0] = 1;
    int res_size = 1;
    for(int i=2; i<=n; i++)
    {
        res_size = multiply(i, arr, res_size);
    }

    for(int i=res_size-1; i>=0; i--)
    {
        cout<<arr[i];
    }
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
        factorial(n);
        cout<<"\n";
    }
    return 0;
}
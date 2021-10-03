#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    int t;
    fastio
    cin>>t;

    while(t--)
    {
        string s; 
        cin>>s;

        int snakes = 0;
        int mongoose = 0;
        int i;
        for(i=0; i<s.length()-1; i++)
        {
            if(s[i] != s[i+1])
            {
                mongoose++;
                i = i+1;
            }
            else if(s[i] == 's')
            {
                snakes++;
            }
            else
            {
                mongoose++;
            }
        }

        if(i==s.length()-1)
        {
            if(s[s.length()-1] == 's')
            {
                snakes++;
            }
            else
            {
                mongoose++;
            }
        }

        //cout<<snakes<<" "<<mongoose<<"\n";

        if(snakes>mongoose)
        {
            cout<<"snakes\n";
        }
        else if(mongoose>snakes)
        {
            cout<<"mongooses\n";
        }
        else{
            cout<<"tie\n";
        }
    }
}
#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_sdtio(0); cin.tie(0);
using namespace std;

int main()
{
    int white_cord[] = {1, 4, 7};
    int black_cord[] = {2, 3, 5};

    sort(white_cord, white_cord+3);
    sort(black_cord, black_cord+3);
    int total = 0;
    for(int i=0; i<3; i++)
    {
        total = total + abs(white_cord[i] - black_cord[i]);
    }
    cout<<total;
    return 0;
}

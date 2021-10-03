#include <iostream>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

int main()
{
    //take input of the array

    int m, n;
    fastio
            cin >>
        m >> n;

    int arr[m][n] = {0};
    int k = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = k++;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Wave Print of the array "
         << "\n";

    //if the column is even then print it top to down
    //else down to top
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            //top to down
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            //bottom to up
            for (int i = m-1; i>=0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}

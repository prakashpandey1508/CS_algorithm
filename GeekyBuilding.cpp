#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n)
{
    for (int i = 0; i < n - 3; i++)
    {
        int a = max(arr[i], arr[i + 1]);
        int b = min(arr[i], arr[i + 1]);

        for (int j = i + 2; j < n; j++)
        {
            if (arr[j] < a && arr[j] > b)
                return true;
        }

        return false;
    }
}
int main()
{
    int A[6] = {4, 7, 11, 5, 13, 2};

    cout << check(A, 6);

    return 0;
}
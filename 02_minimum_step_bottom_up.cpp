#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    const int N_MAX = 20000001;
	int *DP = new int[N_MAX];
	DP[1] = 0;

	for (int i = 2; i < N_MAX; i++) {
		int minimum =  DP[i - 1];
		if (i % 3 == 0) minimum = min(minimum, DP[i/3]);
		if (i % 2 == 0) minimum = min(minimum, DP[i/2]);

		DP[i] = minimum + 1;
	}

	int T, N; cin >> T;
	int c = 1;
	while (T--) {
		cin >> N;
		cout << "Case " << c++ << ": " << DP[N] << "\n";
	}

	delete[] DP;
    return 0;
}
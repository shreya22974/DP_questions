#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solve(int n, vector<int>& dp) {
    if (n == 0) return 1;
    if (n == 1) return 0;

    if (dp[n] != -1) {
        return dp[n];
    }

    dp[n] = ((n - 1LL) *
            (solve(n - 1, dp) + 1LL * solve(n - 2, dp))) % MOD;

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << solve(n, dp) << endl;
    return 0;
}
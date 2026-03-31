#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= 6 && i <= n; i++) // logic if n is less than 6
    {
        ll ans = 1;

        dp[i] = 1 << (i - 1);
    }
    int MOD = 1e9 + 7;
    for (int i = 7; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout << dp[n] % MOD;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        vector<int> vv(m);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < m; i++) cin >> vv[i];

        // Sort the arrays
        sort(v.begin(), v.end());
        sort(vv.begin(), vv.end());

        // Calculate cumulative sums
        vector<ll> prefA(n + 1), prefB(m + 1);
        for (int i = 0; i < n; i++) {
            prefA[i + 1] = prefA[i] + v[i];
        }
        for (int i = 0; i < m; i++) {
            prefB[i + 1] = prefB[i] + vv[i];
        }

        // Main calculation loop
        ll ans = 0;
        for (int i = 0; i <= n; i++) {
            ll res = (prefB[m] - prefB[m - i] - prefA[i]) + (prefA[n] - prefA[i] - prefB[n - i]);
            ans = max(ans, res);
        }

        cout << ans << endl;
    }

    return 0;
}

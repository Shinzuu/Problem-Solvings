#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define pb push_back

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        vi v(n);
        f(i, 0, n) cin >> v[i];
        cin >> m;

        f(qq, 0, m) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            int cnt = 0;

            if (b > a) {
                for (int k = a; k < b; k++) {
                    if (k == a || v[k] - v[k - 1] > v[k + 1] - v[k])
                        cnt += v[k];
                    else
                        cnt += v[k + 1] - v[k];
                }
            } else {
                for (int k = a; k > b; k--) {
                    if (k == b || v[k - 1] - v[k - 2] > v[k] - v[k - 1])
                        cnt += v[k - 1];
                    else
                        cnt += v[k] - v[k - 1];
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}

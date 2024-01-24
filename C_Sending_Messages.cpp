#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> v(n);
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                v[i]*a < b ? (ans += v[i]*a) : (ans += b);
            }
            else{
                (v[i] -v[i-1])*a < b ? (ans += (v[i] -v[i-1])*a) : (ans += b);
            }
        }
        //cout << ans << endl;
        if(ans < f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

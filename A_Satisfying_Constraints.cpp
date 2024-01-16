#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define PHI 1.618033988749895 // Golden Ratio
#define PSI -0.618033988749895 // Conjugate of Golden Ratio
#define read(type) readInt<type>()

ll min(ll a, int b) { return (a < b) ? a : b; }
ll min(int a, ll b) { return (a < b) ? a : b; }
ll max(ll a, int b) { return (a > b) ? a : b; }
ll max(int a, ll b) { return (a > b) ? a : b; }
ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll calcFib(int n) {
    double sqrt5 = sqrt(5);
    return round((pow(PHI, n) - pow(PSI, n)) / sqrt5);
}

string to_upper(string a) {
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}

string to_lower(string a) {
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}

bool prime(ll a) {
    if (a == 1)
        return false;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return false;
    return true;
}

void yes() {
    cout << "YES\n";
}

void no() {
    cout << "NO\n";
}

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, a = 0, b = MOD, n;
        int ans = 0;
        vi c;
        cin >> n;
        f(i, 0, n) {
            cin >> x >> y;
            if (x == 1) {
                if (a <= y)
                    a = y;
            } else if (x == 2) {
                if (b >= y)
                    b = y;
            } else
                c.pb(y);
        }

        sort(c.begin(), c.end());
        int j = 0;

        f(i,0,c.size()){
            if(c[i] >= a && c[i] <= b)
              j++;
        }
        //cout << j << endl;

        if(a==b)
            ans = 1-j;
        else
            ans = (b-a-j)+1;

        if(ans < 0)
            ans = 0;
        cout << ans << endl;
    }

    return 0;
}

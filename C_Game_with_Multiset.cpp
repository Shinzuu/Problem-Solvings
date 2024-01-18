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

    #define f(i,s,e) for(long long int i=s;i<e;i++)
    #define cf(i,s,e) for(long long int i=s;i<=e;i++)
    #define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
    #define pb push_back
    #define eb emplace_back



    #define MOD 1000000007
    #define PI 3.1415926535897932384626433832795
    #define PHI 1.618033988749895 // Golden Ratio
    #define PSI -0.618033988749895 // Conjugate of Golden Ratio
    #define read(type) readInt<type>()
    ll min(ll a,int b) { if (a<b) return a; return b; }
    ll min(int a,ll b) { if (a<b) return a; return b; }
    ll max(ll a,int b) { if (a>b) return a; return b; }
    ll max(int a,ll b) { if (a>b) return a; return b; }
    ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
    ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
    ll calcFib(int n) { double sqrt5 = sqrt(5); return round((pow(PHI, n) - pow(PSI, n)) / sqrt5); }
    string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
    string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
    bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
    void yes() { cout<<"YES\n"; }
    void no() { cout<<"NO\n"; }

    typedef long int int32;
    typedef unsigned long int uint32;
    typedef long long int int64;
    typedef unsigned long long int  uint64;


    int main()
    {
        ll n;
        cin >> n;
        vector <int> cnt(30);
        for(int i =0; i < n ; i++){
            
            int t,v,k=0;
            cin >> t;
            if(t==1){
                cin >> v;
                cnt[v]+=1; // calculating , existance of power
            }
            else{
                cin >> v;
                for (int l =29; l>=0; l--){
                    int m = min(v >> l , cnt[l]);
                    //cout << "debug v>>l = "<< (v>> l) <<  " cnt = " << cnt[l] ;
                    v -= m << l;
                    //cout << " new v = " << v << endl;
                }
                cout << ( v == 0 ? "YES" : "NO") << endl;
            }
        }   
        return 0;
}
                // x >> y returns what is needed as power of 2 to get x
                // (4>>1) -> 2; since 2 pow 1*2 == 4
                // (4>>2) -> 1; since 2 pow 2*1 == 4
                // (4>>3) -> 0; cant exist (since 2 pow 3*0 = 1)
                // (4>>4) -> 0; cant exist (since 2 pow 4*0 = 1)


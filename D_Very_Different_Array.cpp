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
        ll t;
        cin >> t;
        while(t--){
            int n,m;
            ll ans = 0;
            cin >> n >> m;
            vi v(n);
            vi c(m);
            f(i,0,n) cin >> v[i];
            f(i,0,m) cin >> c[i];
            sort(v.begin(),v.end());
            sort(c.begin(),c.end());
            int P1=0,P2=n-1;    //pointers for top vec
            int p1=0,p2=m-1;    //pointers  for bot vec
            if(n>1){
                f(i,0,n){
                    // if max(Xn-Y0,Xn-Ym) > max(X0-Y0,X0-Ym) //this chooses which elemnt to prioritize 
                    if(max(abs(v[P2]-c[p1]),abs(v[P2]-c[p2])) > max(abs(v[P1]-c[p1]),abs(v[P1]-c[p2])))
                    {
                        if(abs(v[P2]-c[p1])>abs(v[P2]-c[p2])){
                            ans += abs(v[P2]-c[p1]);
                            p1++; //smallest taken
                            P2--; //got used
                            if(abs(v[P1]-c[p1]) > abs(v[P1]-c[p2])){
                                ans += abs(v[P1]-c[p1]);
                                p1++;
                                P1++;
                            }
                            else{
                                ans += abs(v[P1]-c[p2]);
                                p2--;
                                P1++;
                            }
                        }
                        else{
                            if((abs(v[P1]-c[p1])>abs(v[P1]-c[p2]))){
                                ans += abs(v[P2]-c[p1]);
                                p1++; 
                                P2--; 
                                if(abs(v[P1]-c[p1]) > abs(v[P1]-c[p2])){
                                    ans += abs(v[P1]-c[p1]);
                                    p1++;
                                    P1++;
                                }
                                else{
                                    ans += abs(v[P1]-c[p2]);
                                    p2--;
                                    P1++;
                                }
                            }
                        }
                    }
                    else
                    {
                        if ((v[P1]-c[p1])>abs(v[P1]-c[p2])) {
                            ans += abs(v[P2] - c[p1]);
                            p1++;
                            P2--;

                            if (abs(v[P1] - c[p1]) > abs(v[P1] - c[p2])) {
                                ans += abs(v[P1] - c[p1]);
                                p1++;
                                P1++;
                            } else {
                                ans += abs(v[P1] - c[p2]);
                                p2--;
                                P1++;
                            }
                        } 
                        else {
                            ans += abs(v[P1]-c[p2]);
                                p2--; 
                                P1++; 
                        
                            if (abs(v[P2] - c[p1]) > abs(v[P2] - c[p2])) {
                                ans += abs(v[P2] - c[p1]);
                                p1++;
                                P2--;
                            } else {
                                ans += abs(v[P2] - c[p2]);
                                p2--;
                                P2--;
                            }
                            }
                        }                    
                    if(i+1==n/2)
                        break;
                }
                //cout <<"this "<< ans << endl;
                if(n%2==1){
                    ans+= max(abs(v[n/2]-c[n/2]), abs(v[n/2]-c[m-n/2-1]));
                }
            }
            else
                ans = max(abs(v[0]-c[m-1]), abs(v[0]-c[0]));

            cout << ans << endl;
        }
        
            
        return 0;
}
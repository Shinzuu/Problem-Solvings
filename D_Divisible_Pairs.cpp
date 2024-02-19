#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef vector<int> vi;

// Custom hash function for pair<int, int>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2> &pair) const {
        auto hash1 = std::hash<T1>{}(pair.first);
        auto hash2 = std::hash<T2>{}(pair.second);
        return hash1 ^ hash2;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--){
        
        int n, x, y; cin>> n>> x>> y;

        vi v(n);
        f(i,0,n) cin >> v[i];

        //a map that keep the v[i]% x, v[i]% y with order
        unordered_map<pair<int,int>, int, pair_hash> cnt; // Adding pair_hash as custom hash function
        int ans =0;

        f(i,0,n){
            int xx = v[i]%x;
            int yy = v[i]%y;
            //if key pair matches ,then ans +=1 ;else ans +=0
            ans += cnt[{(x - xx) % x, yy}];
            cnt[{xx, yy}]++;
        }
        cout << ans << endl;
    }
        
    return 0;
}

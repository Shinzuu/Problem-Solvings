#include <bits/stdc++.h>
using namespace std;

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
#define ll long long
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }


int main()
{
    ll t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int a=-1,b=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='B')
            {
                a=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B')
            {
                b=i;
                break;
            }
        }
        if(a != -1){
            if(a==b){
                cout << 1 << endl;
            }
            else
                cout << b-a+1 << endl;
        }
        else
            cout << 0 << endl;

    }


    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll x,n;
        cin >> x >> n;
        ll y =1;
        //cout << y << x%y << endl;
        for (ll i=1; i*i <= x; i++){
            if(x%i == 0)
            {   
                if(n <= x/i)
                    y = max(y, i);

                if(n <= i)
                    y = max(y, x/i);
            }
        }

        cout << y << endl;
    }
    
    return 0;
}
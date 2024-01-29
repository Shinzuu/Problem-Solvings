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
        int n; cin >> n;
        int a=-1,b=0;
        int x,y;
        for(int i=0; i<n; i++)
        {    
            cin >> x >> y;
            if(x <= 10 && y > b){
                a=i+1;
                b=y;
            }
        }
        cout << a << endl;
    }
    
    return 0;
}
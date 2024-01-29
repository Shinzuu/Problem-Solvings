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
        int n,k;
        cin >> n >> k;
        for(int i=0; i < n ; i++){
            for(int j=0; j<k; j++){
                cout << static_cast<char>('a' + j);
            }
        }
        cout << endl;
    }
    
    return 0;
}
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
        string s; cin >> s;
        vector <char> v;
        int lex =0;
        for(int i=1; i<n ; i++){
            if(s[i]<s[i-1]){ 
                lex++;
                v.push_back(s[i-1]);
            }
        }

        reverse(v.begin(),v.end());
        for(int i=0; i < v.size() ; i++){
            // if(v[i] > v[i+1]){ 
                cout << v[i] ;
            // }
        }

        cout << lex <<endl;
    }
    
    return 0;
}
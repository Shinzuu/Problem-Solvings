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
        string s;
        for(int i=0; i<8 ;i++)
        {
            cin >> s ;
            for(int j=0; j<8; j++){
                if(s[j] != '.')  
                    cout << s[j];
            }
        }
        cout << endl;
    }
    
    return 0;
}
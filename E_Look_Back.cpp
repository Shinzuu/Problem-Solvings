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
        int n, ans=0;
        int temp ,val;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> val;
            if(i==0)
                temp = val;
            else{
                if(val < temp){
                    // ans+= ceil(ceil(temp/val)/2);
                    // temp = (val * ceil(temp/val));
                    //cout <<"this : " << temp << endl;
                    
                }
                else
                    temp = val;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
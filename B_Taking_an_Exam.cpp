#include <bits/stdc++.h>
using namespace std;

#define ll long long

template <typename T>
void whatis(const T& value) {
    using namespace std;
    cout << "Value is: " << value << endl;
}


int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,m; 
        cin >> n >> m;
        
        int ans =0;
        vector <int> v(n);

        for(int i= 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i;
        for(i=0 ; i < n; i++)
        {
            if(ans+v[i] <= m)
                ans+= v[i];
            else
                break;
        }
        //whatis(i);
        cout << ans+(m-ans)+i << endl;
    }
    
    return 0;
}
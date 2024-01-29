#include <bits/stdc++.h>
using namespace std;

#define ll long long
template <typename T>
void whatis(const T& value) {
    std::cout << "Value is: " << value << std::endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s ; cin >> s;
        int stringSize = s.size();
        int n;
        if( s.size() % 2 ==0){
            //A would be min 2 .so BB = Size-2 . each B (size-2)/2
            n = (s.size()-2)/2; //Max B size
        }
        else{
            n = (s.size()-1)/2;
        }

        // calc
        string a,b;
        int indx = s.size()-1;
        //whatis(indx);
        int j = 1;
        int flag =0;

        for(int i=0; i<n; i++){
            a = s.substr(indx-i , indx);
            b = s.substr(indx - j, i + 1);
            // whatis(a); 
            // whatis(b);
            j+=2;
            if(a==b){
                flag =1;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
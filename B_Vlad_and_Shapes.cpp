#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> counts(n, 0); // Initialize counts of 1s for each line to 0
        
        for (int i = 0; i < n; ++i) {
            string line;
            cin >> line;
            for (char c : line) {
                if (c == '1') {
                    counts[i]++;
                }
            }
        }
        
        bool is_triangle = false;

        for (int count : counts) {
            if (count == 1) {
                is_triangle = true;
                break;
            }
        }
        
        if (is_triangle) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }
    return 0;
}

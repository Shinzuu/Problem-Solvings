#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isNonDegenerate(int a, int b, int c) {
    return (a + b > c) && (b + c > a) && (c + a > b);
}

int countNonDegenerateTriangles(const vector<int>& v) {
    int count = 0;
    int n = v.size();

    for (int i = 0; i < n - 2; ++i) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; ++j) {
            while (k < n && isNonDegenerate(v[i], v[j], v[k])) {
                ++k;
            }
            count += (k - j - 1);
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        if (n < 3) {
            cout << 0 << endl;
        } else {
            sort(v.begin(), v.end());
            count = countNonDegenerateTriangles(v);
            cout << count << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findKthCard(int totalCards, long long k) {
    long long oddCount = (k + 1) / 2;
    if (k % 2 == 0) {
        return 2 * oddCount;
    } else {
        return 2 * (oddCount - 1) + (k - 1) / (totalCards / 2) + 1;
    }
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int totalCards;
        long long k;
        cin >> totalCards >> k;
        cout << findKthCard(totalCards, k) << endl;
    }

    return 0;
}

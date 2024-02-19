#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countGroups(vector<int>& numbers) {
    unordered_map<int, int> bitGroups;
    for (int num : numbers) {
        int bitMask = 0;
        for (int i = 0; i < 31; ++i) {
            bitMask |= (1 << i);
            int maskedNum = num & bitMask;
            bitGroups[maskedNum]++;
        }
    }
    
    // Check if any group has more than one number
    for (auto& group : bitGroups) {
        if (group.second > 1) {
            return -1; // -1 indicates that the condition cannot be satisfied
        }
    }
    
    // If all groups have only one number, return the total number of numbers
    return numbers.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        int result = countGroups(numbers);
        if (result == -1) {
            cout << n << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}

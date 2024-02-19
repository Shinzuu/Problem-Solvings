#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

// Function to calculate the sum of digits of a number
ll sumOfDigits(ll num) {
    if (num < 10) return num * (num + 1) / 2;
    ll d = log10(num);
    ll p = pow(10, d);
    ll msd = num / p;
    return msd * 45 * d * (p / 10) + msd * (msd - 1) / 2 * p + msd * (1 + num % p) + sumOfDigits(num % p);
}

// Function to calculate the sum of numbers after replacing with sum of digits
ll solve(ll n) {
    return sumOfDigits(n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

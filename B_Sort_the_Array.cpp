#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


 
int main() {
    int n;
	cin >> n;

	if (n == 1) {
		puts("yes");
		printf("1 1\n");
		return 0;
	}

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int l = 0;
	while (l + 1 < n && a[l] < a[l + 1]) {  //find the first case where its not sorted
		++l;
	}

	int r = l + 1;
	while (r < n && a[r] < a[r - 1]) {  //find the 2nd case (last)
		++r;
	}

	reverse(a.begin() + l, a.begin() + r); 

	for (int i = 1; i < n; ++i) {
		if (a[i] < a[i - 1]) {
			puts("no");
			return 0;
		}
	}
	puts("yes");
	printf("%d %d\n", l + 1, r);
	return 0;
}
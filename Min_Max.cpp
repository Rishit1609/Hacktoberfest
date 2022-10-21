#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> pp;
    pp.first = *min_element(a, a + n);
    pp.second = *max_element(a, a + n);
    return pp;
}

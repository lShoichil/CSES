#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout.setf(ios::fixed); cout.precision(20);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
 
    int n; cin >>  n;
    vector<ll> a(n);
    for( int i = 0; i < n; ++i){
        cin >> a[i];
    }
 
    ll t = 0;
    for( int i = 0; i < n - 1; ++i){
        while (a[i] > a[i + 1]) {
            a[i + 1]++;
            t++;
        }
    }
 
    cout << t;
    
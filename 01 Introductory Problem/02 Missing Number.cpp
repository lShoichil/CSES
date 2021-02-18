#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main() {
    //freopen("OUTPUT.out","w",stdout);
    //freopen("INPUT.out","r",stdout);
 
    ll n; cin >> n;
    vector<ll> a(n - 1);
    vector<ll> b(n);
    for(int i = 0; i < n - 1; ++i){
        cin >> a[i];
    }
 
    sort(a.begin(),a.end());
    iota(b.begin(),b.end(), 1);
 
    for (int i = 0; i < n; ++i){
        if (a[i] != b[i]){
            cout << b[i];
            return 0;
        }
    }
}
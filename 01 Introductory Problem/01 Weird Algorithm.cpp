#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main() {
    //freopen("OUTPUT.out","w",stdout);
    //freopen("INPUT.out","r",stdout);
 
    ll n; cin >> n;

    cout << n << " ";
   while (n != 1) {
       if (n % 2 == 0){
           n /= 2;
           cout << n << " ";
       } else {
           n = (n * 3) + 1;
           cout << n << " ";
       }
   }
 
    return 0;
}

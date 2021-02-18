#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main() {
    //freopen("OUTPUT.out","w",stdout);
    //freopen("INPUT.out","r",stdout);

    string str;
    getline(cin, str);
    vector<char> a(str.length());
    for ( int i = 0; i < str.length(); ++i){
        a[i] = str[i];
    }
 
    vector<int> b(str.length(), 1);
    int t = 0;
    for (int i = 0; i < str.length(); ++i){
        if(a[i] == a[i+1]){
            if(a[i+1] != a[i+2]){
                t++;
            }
            t++;
            b[i] = t;
        } else t = 0;
    }
 
    sort(b.begin(),b.end());
    cout << b[str.length() - 1];

    return 0;
 
    
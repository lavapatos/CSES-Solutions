/*
 * Problem Name: Increasing_Array
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-10-30
 */

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
 
    int prev;
    cin>>prev;
 
    ll ans = 0;
    int act;
 
    for (int i = 1; i < n; i++) {
        cin>>act;
        if (act < prev) {ans += prev-act;}
        else {prev = act;}
    }
 
    cout<<ans;
 
    return 0;
}
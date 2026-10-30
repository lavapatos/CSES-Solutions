/*
 * Problem Name: Missing_Number
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
 
    ll n;
    cin>>n;
 
    ll big = n*(n + 1)/2;
    ll sum = 0;
 
    ll num;
    for (int i = 0; i < n - 1; i++) {
        cin>>num;
        sum += num;
    }
 
    cout<<big-sum;
 
    return 0;
}
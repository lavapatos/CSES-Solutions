/*
 * Problem Name: Permutations
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
 
    if (n == 1) {cout<<1; return 0;}
    if (n < 4) {cout<<"NO SOLUTION"; return 0;}
 
    for (int i = 2; i <= n; i+=2) {
        cout<<i<<" ";
    }
 
    for (int i = 1; i <= n; i+=2) {
        cout<<i<<" ";
    }
 
    return 0;
}
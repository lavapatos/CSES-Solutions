/*
 * Problem Name: Repetitions
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
 
    string dna;
    cin>>dna;
    int n = dna.length();
    int ans = 1;
    char act = dna[0];
    int curr = 1;
    for (int i = 1; i < n; i++) {
        if (dna[i] == act) {curr++;}
        else {
            ans = max(curr,ans);
            curr = 1;
            act = dna[i];
        }
    }
    cout<<max(curr,ans);
 
    return 0;
}
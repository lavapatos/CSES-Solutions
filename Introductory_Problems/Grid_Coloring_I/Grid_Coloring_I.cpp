/*
 * Problem Name: Grid_Coloring_I
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-11-02
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
    int m;
 
    cin>>n;
    cin>>m;
 
    vector<string> grid(n);
 
    string colors = "ABCD";
 
    for (int i = 0; i < n; i++) {
    	getline(cin>>ws , grid[i]);
    }
	
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		
    		int nF = i;
    		int nC = j;
    		if (i) {nF = i - 1;}
			if (j) {nC = j - 1;}
 
			bool encontrado = false;
 
			for (char c : colors) {
				if (c == grid[i][j] || c == grid[nF][j] || c == grid[i][nC]) {continue;}
				else {
					grid[i][j] = c;
					encontrado = true;
					break;
				}
			}
			if (!encontrado) {
				cout<<"IMPOSSIBLE"<<endl;
				return 0;
			}
    	}
    }
 
 
 
	for (int i = 0; i < n; i++) {
    	cout<<grid[i]<<endl;
    }
 
    return 0;
}
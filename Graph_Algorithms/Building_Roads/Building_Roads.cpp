/*
 * Problem Name: Building_Roads
 * Language: C++
 * Category: Graph_Algorithms
 * Date: 2026-11-06
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
 
    int n, m;
    cin>>n>>m;
 
    vector<bool> visited(n+1,false);
 
    vector<vi> adj(n+1);
 
    int a;
    int b;
 
    for (int i = 0; i < m; i++) {
        cin>>a;
        cin>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    stack<int> s;
    queue<int> q;
 
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            s.push(i);
            q.push(i);
            visited[i] = 1;
 
            while(!q.empty()) {
                int act = q.front();
                q.pop();
                vi list = adj[act];
                for (auto v : list) {
                    if (!visited[v]) {
                        q.push(v);
                        visited[v] = 1;
                    }
                }
            }
        }
    }
    if (!s.empty()) {
        cout<<s.size()-1<<'\n';
        while(s.size()>1) {
            int temp = s.top();
            s.pop();
            cout<<temp<<" "<<s.top()<<'\n';
        }
    }
 
 
    return 0;
}
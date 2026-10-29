/*
 * Problem Name: Static_Range_Sum_Queries
 * Language: C++
 * Category: Range_Queries
 * Date: 2026-10-29
 */

#include <iostream>
using namespace std;
 
int main()
{
    long long n;
    long long q;
 
    cin>>n;
    cin>>q;
 
    long long arr[n+1];
    arr[0] = 0;
    cin>>arr[1];
 
    for (int i = 2; i < n+1; i++) {
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
 
    int queries = 0;
    long long a;
    long long b;
    while (queries < q) {
        cin>>a;
        cin>>b;
        long long ans = arr[b] - arr[a-1];
        cout<<ans<<endl;
        queries++;
    }
 
    return 0;
}
# Problem Name: Minimizing_Coins
# Language: Python
# Category: Dynamic_Programming
# Date: 2026-11-02

n, x = map(int, input().split())
coins = list(map(int, input().split()))
 
#dp = [float('inf')]*n+1
dp = [0]
 
for i in range (1,x+1):
	minSum = float('inf')
	for c in coins:
		if i >= c:
			minSum = min(minSum,dp[i-c]+1)
	dp.append(minSum)
print(dp[x] if dp[x] != float('inf') else -1)
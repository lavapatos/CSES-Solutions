# Problem Name: Dice_Combinations
# Language: Python
# Category: Dynamic_Programming
# Date: 2026-11-02

n = int(input())
 
dp = [1]
 
for i in range(1,n+1):
	if i < 7:
		dp.append(sum(dp[0:i])%(10**9+7))
	else:
		dp.append(sum(dp[i-6:i])%(10**9+7))
print(dp[n])
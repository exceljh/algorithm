#include <iostream>
#include <algorithm>
using namespace std;


int dp[305][3] = { 0 };
int a[305] = { 0 };

int main()
{
	int n;

	cin >> n;

	
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	dp[1][1] = a[1];

	for (int i = 2; i <= n; i++)
	{
		dp[i][2] = dp[i - 1][1] + a[i];
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) +a[i];
	}

	cout << max(dp[n][1], dp[n][2]) << '\n';


	

}


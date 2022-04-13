//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int mx = 1e5 + 123;
int dp[mx][4];
int a[mx][4];
int n;

int f(int i, int pos)
{
	if (i > n)
	{
		return 0;
	}
	if (dp[i][pos] != -1)
	{
		return dp[i][pos];
	}
	int ans = 1e9;
	int j;
	for (j = 1; j <= 3; j++)
	{
		if (pos != j)
		{
			ans = min(ans, a[i][j] + f(i + 1, j));
		}

	}
	return dp[i][pos] = ans;
}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0, t;
	string s;
	cin >> t;
	for ( k = 1; k <= t ; k++)
	{
		memset(dp, -1, sizeof(dp));
		cin >> n;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= 3 ; j++)
			{

				cin >> a[i][j];
			}


		}
		cout << "Case " << k << ":" << " " << f(1, 0) << endl;;

	}









}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}
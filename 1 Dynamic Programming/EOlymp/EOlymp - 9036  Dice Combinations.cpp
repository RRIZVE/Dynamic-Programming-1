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

#define MOD 1000000007

const int mx = 1e6 + 200;
int coin[mx];
int dp[mx];
int n, target;

int  Combinations(int target)
{
	if (target < 0)
		return 0;
	if (target == 0)
		return 1;
	if (dp[target] != -1)
		return dp[target];

	int ans = 0;
	for (int i = 1; i <= 6 ; i++)
	{

		ans = ((ans % MOD) + ( Combinations(target - i) % MOD)) % MOD;




	}
	return dp[target] = ans;

}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> target;

	cout <<  Combinations(target);

	/*
	8
	>> 125

	3
	>>4
	1 1 1
	1 2
	2 1
	3


	*/








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
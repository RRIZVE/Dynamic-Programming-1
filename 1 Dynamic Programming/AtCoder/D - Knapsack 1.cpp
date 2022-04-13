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

int n, W;//n==100 w==1e5
ll w[123];
ll v[123];
ll dp[123][mx];//n  weight

ll f(int i, ll CurWeight)
{
	if (i > n)
	{
		return 0;
	}
	if (dp[i][CurWeight] != -1)
		return dp[i][CurWeight];

	ll ans1 = 0;
	ll ans2 = 0;

	if (CurWeight + w[i] <= W)
	{
		ans1 = v[i] + f(i + 1, CurWeight + w[i]);
	}



	ans2 =  f(i + 1, CurWeight);

	return dp[i][CurWeight] = max(ans1, ans2);



}




void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> W;
	for ( i = 1; i <= n ; i++)
	{
		cin >> w[i] >> v[i];

	}
	cout << f(1, 0) << endl;









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
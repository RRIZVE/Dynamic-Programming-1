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

ll n, W;//n==100 w==1e5
ll w[123];
ll v[123];
ll dp[123][mx];//n  weight

ll f(ll i, ll cnt, ll sum)
{
	if (i > n)
	{
		return 0;
	}
	if (dp[i][cnt] != -1)
		return dp[i][cnt];

	ll ans1 = 0;
	ll ans2 = 0;

	if (cnt + w[i] <= W)
	{
		ans1 = v[i] + f(i + 1, cnt + w[i], sum + v[i]);
	}



	ans2 =  f(i + 1, cnt, sum);

	return dp[i][cnt] = max(ans1, ans2);



}




void solve()
{

	ll i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> W;
	for ( i = 1; i <= n ; i++)
	{
		cin >> w[i] >> v[i];

	}
	cout << f(1, 0, 0) << endl;









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
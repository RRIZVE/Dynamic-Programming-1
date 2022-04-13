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


ll v[1000110];
ll dp[1000110];
ll n;

ll house(ll i)
{

	if (dp[i] != -1)
	{
		return dp[i];
	}


	if (i > n )
		return 0;




	// pick

	ll ans1 = v[i] + house(i + 2);


	// not pick

	ll ans2 = house(i + 1);

	return dp[i] = max(ans1, ans2);


}



void solve()
{

	ll i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> v[i];

	}



	cout << house(1) << endl;

	/*

	5
	6 1 2 10 4


	16
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
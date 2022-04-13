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

#define MOD 12345

const int mx = 1e6;
ll a[mx];



void solve()
{

	ll i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	if (n == 1)
		cout << 2 << endl;
	else if (n == 2)
		cout << 4 << endl;
	else if (n == 3)
		cout << 7 << endl;
	else
	{
		a[2] = 4;
		a[3] = 7;
		a[4] = 13;

		for ( i = 5; i <= n ; i++)
		{
			a[i] = ((a[i - 1] % MOD) + (a[i - 2] % MOD) + (a[i - 3] % MOD)) % MOD;


		}
		cout << a[n] << endl;

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
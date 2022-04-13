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

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 150;
int a[mx];
int b[mx];
int dp[mx][mx];
int n, m;

int f(int i, int j)
{
	if (i > n || j > m)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	if (a[i] == b[j])
	{
		return dp[i][j] = 1 + f(i + 1, j + 1);
	}
	int x = f(i + 1, j);
	int y = f(i, j + 1);

	return dp[i][j] = max(x, y);


}



void solve()
{
	int cnt = 0;
	while (1)
	{
		cnt++;
		int i, j, k , z, c = 0;
		string s;
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		memset(dp, -1, sizeof(dp));
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];

		}
		for ( i = 1; i <= m ; i++)
		{
			cin >> b[i];

		}
		//Twin Towers #1
		//Number of Tiles : 4
		cout << "Twin Towers #" << cnt << endl;
		cout << "Number of Tiles : ";
		cout << f(1, 1) << endl << endl;;


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
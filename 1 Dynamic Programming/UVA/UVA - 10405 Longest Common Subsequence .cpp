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

const int mx = 1050;
int a[mx];
int b[mx];
int dp[mx][mx];
int n, m;
string s1, s2;

int f(int i, int j)
{

	if (i >= n || j >= m)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	if (s1[i] == s2[j])
	{
		return dp[i][j] = 1 + f(i + 1, j + 1);
	}
	int x = f(i + 1, j);
	int y = f(i, j + 1);

	return dp[i][j] = max(x, y);


}



void solve()
{
	while (getline(cin, s1), getline(cin, s2))
	{
		if (s1[0] == '0' && s2[0] == '0')
		{
			break;
		}
		int i, j, k , z, c = 0;


		n = s1.size();
		m = s2.size();
		memset(dp, -1, sizeof(dp));

		cout << f(0, 0) << endl;
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
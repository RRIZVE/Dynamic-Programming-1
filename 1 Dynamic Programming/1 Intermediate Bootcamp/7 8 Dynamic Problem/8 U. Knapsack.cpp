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

const int mx = 1e6;
int dp[21][110];
int pr[100];
int w[100];
int n, c, cnt = 0, cap;

int f(int i, int cap)
{
	cnt++;

	if (i == n)
		return 0;

	if (dp[i][cap] != -1)
		return dp[i][cap];

	int a = INT_MIN;
	int b = INT_MIN;

	if (cap >= w[i])
	{
		a = pr[i] + f(i + 1, cap - w[i]);
	}

	b = f(i + 1, cap);

	return dp[i][cap] = max(a, b);

}


void solve()
{

	int i, j, k , m, x, y, z;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> cap;
	for ( i = 0; i < n ; i++)
	{
		cin >> w[i] >> pr[i];

	}
	cout << f(0, cap) << endl;






















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
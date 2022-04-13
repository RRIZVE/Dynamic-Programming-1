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

const int mx = 1e6;
int a[500][500] = {0};
int dp[500][500] ;
int n;


int f(int x, int y)
{
	if (x == (2 * n - 1) && y == n)
	{
		return a[x][y];
	}
	if (dp[x][y] != -1)
	{
		return dp[x][y];
	}

	int ans1 = 0;
	int ans2 = 0;

	if (x < (2 * n - 1) && y <= n)
	{
		ans1 = a[x][y] + f(x + 1, y);

	}

	if (x < (2 * n - 1) && y <= n - 1)
	{
		ans2 = a[x][y] + f(x + 1, y + 1);

	}

	return dp[x][y] = max(ans1, ans2);



}



void solve()
{

	int t, k;
	cin >> t;
	for ( k = 1; k <= t ; k++)
	{


		int i, j, m, x, y, z, c = 0, cnt = 0;
		string s;
		memset(dp, -1, sizeof(dp));
		cin >> n;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= n ; j++)
			{
				if (j <= i)
				{
					cin >> a[i][j];
					/*a[i][j] = k;
					k++;*/

				}
				else
				{
					a[i][j] = 0;
				}



			}


		}

		m = 1;
		x = n + 1;
		y = 2 * n - 1;


		for ( i = x; i <= y  ; i++)
		{
			for ( j = 1; j <= n ; j++)
			{
				if (j <= m)
				{
					a[i][j] = 0;
				}
				else
				{
					/*a[i][j] = k;
					k++;*/
					cin >> a[i][j];
				}




			}
			m++;


		}

		/*for ( i = 1; i <= 2 * n - 1 ; i++)
		{
			for ( j = 1; j <= n ; j++)
			{
				cout << a[i][j] << "  ";


			}
			cout << endl;


		}

		cout << endl;*/

		cout << "Case " << k << ": " << f(1, 1) << endl;

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
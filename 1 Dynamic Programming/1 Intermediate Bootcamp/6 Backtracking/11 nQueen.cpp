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

//n^n

int n;
char broad[100][100];
bool c[100], dr[100], dl[100];
bool isSafe(int x, int y)
{
	if (c[y] || dr[x + y] || dl[x - y + n - 1])return false;
	return true;

}

void nQueen(int row)
{
	if (row == n)
	{
		for ( int i = 0; i < n ; i++)
		{
			for ( int j = 0; j < n ; j++)
			{

				cout << broad[i][j];
			}
			cout << endl;


		}
		cout << endl;
		return ;
	}
	for (int  col = 0; col < n ; col++)
	{
		if (isSafe(row, col))
		{
			c[col] = dr[row + col] = dl[row - col + n - 1] = 1;
			broad[row][col] = 'Q';
			nQueen(row + 1);
			broad[row][col] = '_';
			c[col] = dr[row + col] = dl[row - col + n - 1] = 0;

		}

	}
}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for ( i = 0; i < n ; i++)
	{
		for ( j = 0; j < n ; j++)
		{

			broad[i][j] = '_';
		}


	}
	nQueen(0);









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
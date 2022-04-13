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


int n;
char broad[100][100];

bool isSafe(int x, int y)
{
	//column
	for (int i = 0; i < x; ++i)
	{
		if (broad[i][y] == 'Q')
			return false;
	}
	//right diagonal
	int i = x, j = y;
	while (i >= 0 && j < n)
	{
		if (broad[i][j] == 'Q')
			return false;
		i--;
		j++;

	}
	//left diagonal
	i = x, j = y;
	while (i >= 0 && j < n)
	{
		if (broad[i][j] == 'Q')
			return false;
		i--;
		j--;

	}
	return true;

}

int CountnQueen(int row)
{
	if (row == n)
	{

		return 1;
	}
	int total = 0;
	for (int  col = 0; col < n ; col++)
	{
		if (isSafe(row, col))
		{
			broad[row][col] = 'Q';
			total = total + CountnQueen(row + 1);
			broad[row][col] = '_';

		}

	}
	return total;
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
	cout << CountnQueen(0);









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
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

int r, c;
string grid[1000];

bool haspath(int x, int y)
{
	if (x == r - 1 && y == c - 1)
		return true;
	if (x == r || y == c)
		return false;
	if (grid[x][y] == '#')
		return false;
	return haspath(x , y + 1) || haspath(x + 1, y);




}



int countpaths(int x, int y)
{
	if (x == r - 1 && y == c - 1)
		return 1;
	if (x == r || y == c)
		return 0;
	if (grid[x][y] == '#')
		return false;
	return countpaths(x , y + 1) + countpaths(x + 1, y);




}


void printpaths(int x, int y, string res = "")
{
	if (x == r - 1 && y == c - 1)
	{
		cout << res << endl;
		return ;
	}
	if (x == r || y == c)
		return ;
	if (grid[x][y] == '#')
		return ;

	printpaths(x, y + 1, res + "R");
	printpaths(x + 1, y , res + "D");


}


void solve()
{

	int i, j, k , n, m, x, y, z, cnt = 0;
	string s;
	cin >> r >> c;


	for ( i = 0; i < r ; i++)
	{
		cin >> grid[i];

	}

	cout << haspath(0, 0) << endl;
	cout << countpaths(0, 0) << endl;
	printpaths(0, 0);

	/*
	4 7
	*****#*
	***###*
	*#*#***
	#******

	1
	3

	RRDDDRRRR
	RDRDDRRRR
	DRRDDRRRR

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
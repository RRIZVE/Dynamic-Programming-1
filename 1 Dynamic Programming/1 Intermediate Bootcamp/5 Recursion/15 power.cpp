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


int l, r;
string s;

int pow(int n, int p)
{
	if (p == 0)
		return 1;
	return n * pow(n, p - 1);
}

int pow1(int n, int p)
{
	if (p == 0)
		return 1;
	int helf = pow1(n, p / 2);
	//cout << helf << endl;
	if (p % 2 == 1)
		return helf * helf * n;
	else
		return helf * helf ;

}

void solve()
{

	int i, j, k , p, m, x, y, z, c = 0, cnt = 0, n;
	cin >> n >> p;
	cout << pow(n, p) << endl;


	cout << pow1(n, p) << endl;
	/*
	10 8

	1
	10
	100
	10000
	100000000

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
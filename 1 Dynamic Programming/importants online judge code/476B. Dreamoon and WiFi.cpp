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


#define fraction() cout.unsetf(ios::floatfield); cout.precision(12); cout.setf(ios::fixed,ios::floatfield);

int sum;
string s, s1;
int len;
double c, cnt = 1;

void f(int i, int sum1)
{

	if (i  == s1.size())
	{
		if (sum1 == sum)
		{
			c++;
		}
		return;

	}

	if (s1[i] == '+')
		f(i + 1, sum1 + 1);
	else if (s1[i] == '-')
		f(i + 1, sum1 - 1);
	else
	{
		f(i + 1, sum1 + 1);
		f(i + 1, sum1 - 1);
	}








}


void solve()
{

	int i, j, k , n, m, x, y, z;

	cin >> s >> s1;
	len = s.size();
	for ( i = 0; i < len ; i++)
	{
		if (s[i] == '+')
			sum = sum + 1;
		else if (s[i] == '-')
			sum = sum - 1;

		if (s1[i] == '?')
			cnt = cnt * 2;


	}
	f(0, 0);
	fraction();



	//cout << c  << endl;;
	//cout << cnt << endl;;
	cout << c / cnt << endl;;












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
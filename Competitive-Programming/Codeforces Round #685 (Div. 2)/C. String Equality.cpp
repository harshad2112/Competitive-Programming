/////////////////////////////////TEST CASES////////////////////////////////////
/*
*/
/////////////////////////////////////CODE//////////////////////////////////////		
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define FORD(i, a, b) for (ll i = a ; i > b ; i--)
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define PI 3.14159265
typedef long long ll;
#define vl vector<ll> 
#define IN(inp) ll inp;cin>>inp;
#define pb push_back
#define all(a) a.begin(),a.end()
#define FR(i,a) for(auto &i:a)
#define rvl(a,n) vl a;FOR(i,0,n){IN(in); a.pb(in);}
#define what(A) cout<<#A<<" is "<<A<<endl;
ll MAX = 100000000000;
	ll MOD = 998244353;
void solve()
{
	IN(n)IN(k);
	map<char, int>q, r;
	string a, b;
	cin >> a >> b;
	FOR(i, 0, n)
	{
		q[a[i]]++;
		r[b[i]]++;
	}
	FR(i, q)
	{
		if (i.second == r[i.first])
		{
			q[i.first] = 0;
			r[i.first] = 0;
		}
		if (i.second > r[i.first])
		{
			q[i.first] -= r[i.first];
			r[i.first] = 0;
		}
		if (i.second < r[i.first])
		{
			r[i.first] -= q[i.first];
			q[i.first] = 0;
		}
	}
	int f = 0;
	FR(i, r)
	{
		//what(i.first)
		//what(i.second)
		if (i.second % k != 0)
		{
			f = 1;
			break;
		}
		ll cnt = 0;
		FR(j, q)
		{
			if (j.first <= i.first)
			{
				//what(j.first)
				//what(j.second)
				if (j.second%k != 0)
				{
					f = 1;
					break;
				}
				cnt += j.second;
				q[j.first] = 0;
			}
		}
		q[i.first] = cnt;
		if (q[i.first] < i.second)
		{
			f = 1;
			break;
		}
		else
		{
			q[i.first] -= i.second;
		}
	}
	if (f)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	
}
int main()
{
	fastio
		//freopen("input.txt", "rt", stdin);
		//freopen("output.txt", "wt", stdout);
		ll test = 1;
	cin >> test;
	while (test--)
	{
		solve();
	}
}
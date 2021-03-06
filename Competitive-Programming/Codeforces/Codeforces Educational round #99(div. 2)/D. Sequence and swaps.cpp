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
ll notPrime[100010];
map<ll, vl>factors;
void sieve()
{
	for (int i = 2; i < 100010; i++)
	{
		if (notPrime[i] != 0)
			continue;
		for (int j = i; j < 100010; j += i)
		{
			notPrime[j]++;
			factors[j].pb(i);
		}
	}
}
void solve()
{
	IN(n)IN(x);
	rvl(v, n);
	ll cnt = 0;
	ll f = -1;
	FOR(i, 0, n-1)
	{
		if (v[i] > v[i + 1])
			f = i+1;
	}
	if (f == -1)
	{
		cout << 0 << endl;
		return;
	}
	FOR(i, 0, n)
	{
		if (v[i] > x and i<=f)
		{
			swap(v[i], x);
			cnt++;
		}
	}
	FOR(i, 0, n-1)
	{
		if (v[i] > v[i + 1])
			cnt = -1;
	}
	cout << cnt << endl;
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
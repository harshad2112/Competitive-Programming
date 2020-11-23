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
	IN(n)IN(q);
	string s;
	cin >> s;
	for (int i = 0; i < q; i++)
	{
		int ans = 0;
		IN(f)IN(l);
		f -= 1;
		l -= 1;
		for (int j = 0; j < f; j++)
		{
			if (s[j] == s[f])
			{
				ans = 1;
				break;
			}
		}
		for (int j = l + 1; j < n; j++)
		{
			if (s[j] == s[l])
			{
				ans = 1;
				break;
			}
		}
	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	}
	
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
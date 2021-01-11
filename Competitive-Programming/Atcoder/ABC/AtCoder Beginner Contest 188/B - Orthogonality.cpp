/////////////////////////////////TEST CASES////////////////////////////////////
/*
*/
/////////////////////////////////////CODE//////////////////////////////////////		
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
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
#define test ll t; cin>>t; while(t--)
#define endl "\n"
#define what(A) cout<<#A<<" is "<<A<<endl;
ll MAX = 100000000000000;
ll MOD = 998244353;
/////////////////////////////////////POWER////////////////////////////////////////
/*
ll power(ll a, ll n, ll mod)
{
    ll res=1;
    while (n)
    {
        if (n % 2)
        {
            res = (res * a) % mod;
        }
        n /= 2;
        a = (a * a) % mod;
    }
    return res;
}
*/
/////////////////////////////////////SIEVE/////////////////////////////////////////
/*
ll Prime[10000005];
//vl prime;
//map<ll, vl>factors;
void sieve()
{
    for (int i = 2; i*i < 10000005; i++)
    {
        if (Prime[i] != 0)
            continue;
       // prime.push_back(i);
        for (int j = i*i; j < 10000005; j += i)
        {
            Prime[j] = i;
            //factors[j].pb(i);
        }
    }
}
*/
///////////////////////////////////////////////GCD///////////////////////////////////
/*
ll GCD(ll x, ll y)
{
    if (y == 0)
        return x;
    return GCD(y, x % y);
}
*/
///////////////////////////////////////////////DSU//////////////////////////////////
/*
ll par[200010],siz[200010];
ll find(ll a)
{
    if (a == par[a])
        return a;
    return par[a]=find(par[a]);
}
void union_set(ll a, ll b)
{
    a = find(a);
    b = find(b);
    if (a!=b)
    {
        if (siz[a] > siz[b])
            swap(a, b);
        siz[b] += siz[a];
        par[a] = b;
    }
}*/
/////////////////////////////////////////////FENWICK////////////////////////////////
/*
ll FEN[500010];
void update(ll index, ll value,ll siz)
{
    while (index <= siz)
    {
        FEN[index] += value;
        index = index + (index & (-index));
    }
}
ll sum(ll index)
{
    ll ans = 0;
    while (index > 0)
    {
        ans += FEN[index];
        index = index - (index & (-index));
    }
    return ans;
}
*/
void solve()
{
    IN(n);
    rvl(a, n);
    rvl(b, n);
    ll k = 0;
    FOR(i, 0, n)
    {
        k+=a[i] * b[i];
    }
    if (k == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    fastio
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
       // test
    {
        solve();
    }
}

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

int solve(vector<ll>&v1,vector<ll>&v2,vector<ll>&v3,vector<ll>&v4)
{

    map<int,int> map;

    for( auto x1:v1)
    {
        for(auto x2:v2)
        {
            map[(x1+x2)]++;
        }
    }

    int res = 0;

    for(auto x3:v3)
    {
        for(auto x4:v4)
        {
            res += map[-(x3+x4)];
        }
    }


    return res;


}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
freopen("error.txt","w",stderr);
#endif
 fast_cin();
 ll t;
 cin >> t;
 v64 vec1 = {1,2};
 v64 vec2 = {-2,-1};
 v64 vec3 = {-1,2};
 v64 vec4 = {0,2};
 for(int it=1;it<=t;it++) {
     cout<<solve(vec1,vec2,vec3,vec4)<<endl;;
 }
 return 0;
}
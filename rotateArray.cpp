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
 
//Solution 1 With Extra Space O(N)
void solve(v64 &arr, ll n, ll k){

    v64 arr2;
    v64 arr3;
    k %= n;
    forsn(i,(n-k),n)
    {
        //dbg(arr[i]);
        arr2.push_back(arr[i]);
    }

    forsn(i,0,n-k)
    {
        //dbg(arr[i]);
        arr3.push_back(arr[i]);
    }

    ll index = 0;
    for(auto x:arr2)
        {
            arr[index] = x;
            //dbg(arr[index]);
            //dbg(x);
            index++;
        }

    for(auto y:arr3)
        {
            arr[index] = y;
            //dbg(arr[index]);
            //dbg(y);
            index++;
        }
}

//Solution 2 With Extra Space O(1)
void solve(v64 &arr, ll n, ll k)
{

    k%=n;
    reverse(arr.begin(),arr.begin() + (n-k));
    reverse(arr.begin()+(n-k),arr.end());
    reverse(arr.begin(),arr.end());

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
 ll k;
 ll size;
 ll input;

 cin >> t;
 cin>>size;
 cin>>k;
 for(int it=1;it<=t;it++) {
     v64 arr;
     while(cin>>input)
        arr.push_back(input);

     solve(arr,size,k);

     forn(i,size)
        dbg(arr[i]);
 }
 return 0;
}
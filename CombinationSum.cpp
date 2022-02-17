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

template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}
 
void findCombination(int index,int target, vector<int>& ds, vector<vector<int>>& ans, vector<int>& arr)
{
    if( index == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    //When we pick the element

    if(arr[index] <= target)
    {
        ds.push_back(arr[index]);
        findCombination(index,target - arr[index],ds,ans,arr);
        ds.pop_back();
    }
    //When we do not pick the element
    findCombination(index+1,target,ds,ans,arr);
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,target,ds,ans,candidates);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 fast_cin();
 ll t;
 cin >> t;
 v32 arr = {2,3,6,7};
 ll target = 7;
 vv32 resArr;
 for(int it=1;it<=t;it++) {
     resArr = combinationSum(arr,target);
 }
    cout << resArr << endl;
 return 0;
}
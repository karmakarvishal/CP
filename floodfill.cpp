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
 


void dfs(vector<vector<int>> & image, int r ,int c, int newColor, int baseColor)
{


    int rl = image.size();
    int cl = image[0].size();

    if(r < 0 || r >= rl || c < 0 || c >= cl || image[r][c] != baseColor)
    return;


    image[r][c] = newColor;


    dfs(image,r+1,c,newColor,baseColor);
    dfs(image,r-1,c,newColor,baseColor);
    dfs(image,r,c+1,newColor,baseColor);
    dfs(image,r,c-1,newColor,baseColor);

}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    if(image[sr][sc] != newColor)
        dfs(image,sr,sc,newColor,image[sr][sc]);
    return image;
}








int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
freopen("error.txt","w",stderr);
#endif


 vv32 image = {{0,0,0},{0,0,0}};
 int sr = 1;
 int sc = 1;
 int color = 2;



     floodFill(image,sr,sc,color);

    for(int i =0;i<image.size();i++)
    {
        for(int j = 0;j<image[0].size();j++)
        {
            cout<<image[i][j]<<endl;
        }
    } 
 return 0;
}
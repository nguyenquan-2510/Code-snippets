#pragma optimization_level 4
#pragma once

#pragma COPYRIGHT "------ ---- ----"
#pragma COPYRIGHT_DATE "dd/mm/yyyy"

#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

#define __nguyenquan__ signed main
#define bruv ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define __FILE(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout);
#define v vector
#define gcd(a, b) abs(__gcd(a, b))
#define lcm(a, b) abs((a)*(b)/gcd(a, b))
#define ll long long
#define lli long long int
#define ull unsigned long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using namespace std;

__nguyenquan__()
{
	bruv
	__FILE();
	cerr <<"\nTime elapsed: " << TIME <<"s.\n";
	return (0^0);
}

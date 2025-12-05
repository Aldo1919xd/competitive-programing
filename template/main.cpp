#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template/debug.h"
#endif
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T> using OSet = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class Key, class Value> using OMap = tree<Key, Value, less<Key>, rb_tree_tag, tree_order_statistics_node_update>;
struct custom_hash {static uint64_t splitmix64(uint64_t x) {x += 0x9e3779b97f4a7c15; x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9; 
x = (x ^ (x >> 27)) * 0x94d049bb133111eb; return x ^ (x >> 31);}size_t operator()(uint64_t x) const { 
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count(); return splitmix64(x + FIXED_RANDOM);}};
template <typename K, typename V> using Hash = gp_hash_table<K, V, custom_hash>;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vvi = vector<vi>;
using vvl = vector<vll>;
 
const int INF = 1e9 ;
const ll LINF = 1e18 ;
const ld EPS = 1e-9;
const int MXN = 200000 + 5;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const int MOD3 = 1e9 + 9;
const ld PI = acos(-1.0);
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
const int dx8[] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy8[] = {0, 1, 0, -1, 1, -1, 1, -1};
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define approx(a) fixed << setprecision(a)
#define sz(x) (int)(x).size()
#define fastIO()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define getBit(S, i) ((S >> i) & 1)
#define setBit(S, i) (S | (1LL << i))
#define clearBit(S, i) (S & ~(1LL << i))
#define toggleBit(S, i) (S ^ (1LL << i))
#define bit(i) (1LL << i)
#define assignBit(S,i,v) ( ((S) & ~(1LL << (i))) | ((1LL * (v)) << (i)) )
#define isPowerOfTwo(S) (!(S & (S - 1)) && S)
#define LSB(S) (S & (-S)) 
#define msb(S) (63 - __builtin_clzll(S))
#define mem(a, value) memset(a, value, sizeof(a))
 
template <typename T> inline T ceildiv(T a, T b) { return (a + b - 1) / b; }

void solve() {


}

int main() {
  fastIO();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}


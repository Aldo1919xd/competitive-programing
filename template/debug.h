#ifndef DEBUG_H
#define DEBUG_H

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " = ", print(x), cerr << '\n';
#else
#define dbg(x)
#endif

// ==================== PRIMITIVOS ====================
inline void print(int x) { cerr << x; }
inline void print(long x) { cerr << x; }
inline void print(long long x) { cerr << x; }
inline void print(unsigned x) { cerr << x; }
inline void print(unsigned long long x) { cerr << x; }
inline void print(float x) { cerr << x; }
inline void print(double x) { cerr << x; }
inline void print(long double x) { cerr << x; }
inline void print(char x) { cerr << '\'' << x << '\''; }
inline void print(const char *x) {
  if (x)
    cerr << '\"' << x << '\"';
  else
    cerr << "null";
}
inline void print(const string &x) { cerr << '\"' << x << '\"'; }
inline void print(bool x) { cerr << (x ? "true" : "false"); }

// ==================== PARES Y TUPLAS ====================
template <typename T, typename U> inline void print(const pair<T, U> &p) {
  cerr << '(';
  print(p.first);
  cerr << ", ";
  print(p.second);
  cerr << ')';
}

template <typename... Ts> inline void print(const tuple<Ts...> &t) {
  cerr << '(';
  apply(
      [](auto const &...elems) {
        size_t n = 0;
        ((print(elems), cerr << (++n < sizeof...(Ts) ? ", " : "")), ...);
      },
      t);
  cerr << ')';
}

template <size_t N> inline void print(const bitset<N> &b) {
  cerr << '"' << b.to_string() << '"';
}

// ==================== TRAITS ====================
// Iterable detection
template <typename T, typename = void> struct is_iterable : false_type {};

template <typename T>
struct is_iterable<
    T, void_t<decltype(begin(declval<T>())), decltype(end(declval<T>()))>>
    : true_type {};

template <typename T> constexpr bool is_iterable_v = is_iterable<T>::value;

// String detection (para excluir string en contenedores)
template <typename T>
constexpr bool is_string_like_v = is_same<decay_t<T>, string>::value;

// Map-like detection
template <typename T, typename = void> struct is_map_like : false_type {};

template <typename T>
struct is_map_like<T, void_t<typename T::key_type, typename T::mapped_type>>
    : true_type {};

// ==================== CONTENEDORES ====================
// Genérico (excepto string y map-like)
template <typename T>
inline typename enable_if<is_iterable_v<T> && !is_string_like_v<T> &&
                          !is_map_like<T>::value>::type
print(const T &container) {
  cerr << '{';
  for (auto it = container.begin(); it != container.end(); ++it) {
    print(*it);
    if (next(it) != container.end())
      cerr << ", ";
  }
  cerr << '}';
}

// Map-
template <typename M>
inline typename enable_if<is_map_like<M>::value>::type print(const M &m) {
  cerr << '{';
  for (auto it = m.begin(); it != m.end(); ++it) {
    print(it->first);
    cerr << ": ";
    print(it->second);
    if (next(it) != m.end())
      cerr << ", ";
  }
  cerr << '}';
}

#endif 

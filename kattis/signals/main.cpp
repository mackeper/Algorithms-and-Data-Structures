#include <bits/stdc++.h>
#include "longincseq.hpp"
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define EPS 10e-9

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<double> arr(n);
  trav(x, arr)
    cin >> x;

  cout << popup::longincseq(all(arr)) << "\n";

  return 0;
}

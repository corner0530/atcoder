#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, sum, summ = 0;
  cin >> n;
  vector<long long> a(n);
  for (long long i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  sum = a.at(1) - a.at(0);
  summ = a.at(1) + a.at(0);
  for (long long i = 2; i < n; i++) {
    sum += i * a.at(i) - summ;
    summ += a.at(i);
  }
  cout << sum << endl;
}

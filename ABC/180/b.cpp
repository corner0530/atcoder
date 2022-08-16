#include <bits/stdc++.h>
#include <math.h>

#include <cstdlib>
using namespace std;

int main() {
  long long N, che = 0, sum = 0;
  double dou = 0;
  cin >> N;
  vector<long long> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  for (int i = 0; i < N; i++) {
    sum += abs(vec.at(i));
  }
  cout << sum << endl;
  for (int i = 0; i < N; i++) {
    dou += abs(vec.at(i)) * abs(vec.at(i));
  }
  cout << setprecision(100) << sqrt(dou) << endl;
  for (int i = 0; i < N; i++) {
    che = max(che, abs(vec.at(i)));
  }
  cout << che << endl;
}

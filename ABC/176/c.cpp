#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, sum = 0;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N - 1; i++) {
    if (A.at(i) > A.at(i + 1)) {
      sum += A.at(i) - A.at(i + 1);
      A.at(i + 1) = A.at(i);
    }
  }
  cout << sum << endl;
}

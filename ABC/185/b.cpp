#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M, T, now;
  string result = "Yes";
  cin >> N >> M >> T;
  now = N;
  vector<long long> A(M);
  vector<long long> B(M);
  for (long long i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  now -= A.at(0);
  if (now <= 0) result = "No";
  now += (B.at(0) - A.at(0));
  now = min(now, N);
  for (long long i = 1; i < M; i++) {
    now -= (A.at(i) - B.at(i - 1));
    if (now <= 0) result = "No";
    now += (B.at(i) - A.at(i));
    now = min(now, N);
  }
  now -= (T - B.at(M - 1));
  if (now <= 0) result = "No";
  cout << result << endl;
}

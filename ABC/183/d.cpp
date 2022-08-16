#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, W;
  string cha = "Yes";
  cin >> N >> W;
  vector<vector<long long>> vec(N, vector<long long>(3));
  vector<long long> wat(200001, 0);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      // jはSTPのどれか
      cin >> vec.at(i).at(j);
    }
  }
  for (int i = 0; i < N; i++) {
    wat.at(vec.at(i).at(0)) += vec.at(i).at(2);
    wat.at(vec.at(i).at(1)) -= vec.at(i).at(2);
  }
  for (int i = 0; i < 200001; i++) {
    W -= wat.at(i);
    if (W < 0) cha = "No";
  }
  cout << cha << endl;
}

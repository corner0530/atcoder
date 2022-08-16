#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, mini = -1, sum = 0;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a.at(i).at(j);
      if (mini == -1) {
        mini = a.at(i).at(j);
      } else {
        mini = min(mini, a.at(i).at(j));
      }
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      sum += a.at(i).at(j) - mini;
    }
  }
  cout << sum << endl;
}

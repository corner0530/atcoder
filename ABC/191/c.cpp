#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long h, w, b = 0, hs, ws, kaku = 1, hn, wn, direction = 0, mode;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s.at(i).at(j);
      if (s.at(i).at(j) == '#' && b == 0) {
        hs = i - 1;
        ws = j - 1;
        b = 1;
      }
    }
  }
  hn = hs;
  wn = ws + 1;
  while (hn != hs || wn != ws) {
    mode = 0;
    if (s.at(hn + 1).at(wn + 1) == '#' && s.at(hn).at(wn + 1) == '.' &&
        direction != 2 && mode == 0) {
      ;
      if (direction == 0) {
        wn++;
      } else {
        wn++;
        direction = 0;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn + 1).at(wn + 1) == '.' && s.at(hn).at(wn + 1) == '#' &&
        direction != 2 && mode == 0) {
      if (direction == 0) {
        wn++;
      } else {
        wn++;
        direction = 0;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn + 1).at(wn + 1) == '.' && s.at(hn + 1).at(wn) == '#' &&
        direction != 3 && mode == 0) {
      if (direction == 1) {
        hn++;
      } else {
        hn++;
        direction = 1;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn + 1).at(wn + 1) == '#' && s.at(hn + 1).at(wn) == '.' &&
        direction != 3 && mode == 0) {
      if (direction == 1) {
        hn++;
      } else {
        hn++;
        direction = 1;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn).at(wn) == '.' && s.at(hn + 1).at(wn) == '#' &&
        direction != 0 && mode == 0) {
      if (direction == 2) {
        wn--;
      } else {
        wn--;
        direction = 2;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn).at(wn) == '#' && s.at(hn + 1).at(wn) == '.' &&
        direction != 0 && mode == 0) {
      if (direction == 2) {
        wn--;
      } else {
        wn--;
        direction = 2;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn).at(wn) == '#' && s.at(hn).at(wn + 1) == '.' &&
        direction != 1 && mode == 0) {
      if (direction == 3) {
        hn--;
      } else {
        hn--;
        direction = 3;
        kaku++;
      }
      mode = 1;
    }
    if (s.at(hn).at(wn) == '.' && s.at(hn).at(wn + 1) == '#' &&
        direction != 1 && mode == 0) {
      if (direction == 3) {
        hn--;
      } else {
        hn--;
        direction = 3;
        kaku++;
      }
      mode = 1;
    }
  }
  cout << kaku << endl;
}

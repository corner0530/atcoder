#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  long long r1, c1, r2, c2, ans = 0;
  cin >> r1 >> c1 >> r2 >> c2;
  if (r1 == r2 && c1 == c2) {
  } else if (abs(r1 - r2) + abs(c1 - c2) <= 3) {
    ans++;
  } else if (r1 + c1 == r2 + c2) {
    ans++;
  } else if (r1 - c1 == r2 - c2) {
    ans++;
  } else if (abs(r1 - r2) + abs(c1 - c2) <= 6) {
    ans = 2;
  } else if (abs(r1 - r2) <= 4 && abs(c1 - c2) <= 4) {
    ans = 2;
  } else if (abs(r1 - r2) == 2 && abs(c1 - c2) == 5) {
    ans = 2;
  } else if (abs(r1 - r2) == 5 && abs(c1 - c2) == 2) {
    ans = 2;
  } else if ((r1 + c1 - r2 - c2) % 2 == 0) {
    ans = 2;
  } else if (r1 + c1 - 3 <= r2 + c2 && r1 + c1 + 3 >= r2 + c2) {
    ans = 2;
  } else if (r1 - c1 - 3 <= r2 - c2 && r1 - c1 + 3 >= r2 - c2) {
    ans = 2;
  } else {
    ans = 3;
  }
  cout << ans << endl;
}

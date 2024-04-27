#include <iostream>

using namespace std;

int main() {
  int x, n;
  int p = 0;
  int left_over = 0;
  cin >> x >> n;

  for (int i = 0; i < n; i++) {
    left_over += x;
    cin >> p;
    left_over -= p;
  }

  cout << left_over + x << endl;
}

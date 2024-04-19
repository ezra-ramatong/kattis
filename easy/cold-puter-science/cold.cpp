#include <iostream>

using namespace std;

int main() {
  int temps_collected, i; // this gonna specify how many times to run cin
  long temp;
  int days_below_zero = 0;

  cin >> temps_collected;

  for (i = 1; i <= temps_collected; i++) {
    cin >> temp;
    if (temp < 0)
      days_below_zero++;
  }
  cout << days_below_zero << endl;
}

#include <iostream>

using namespace std;

int main() {
  int h, m;
  int time_in_minutes;
  cin >> h >> m;

  time_in_minutes = h * 60 + m - 45;
  
  h = time_in_minutes / 60;
  m = time_in_minutes % 60;
  
  if (h == 0 && m < 0) {
    h = 23;
    m += 60;
  }
  cout << h << " " << m << endl;
}

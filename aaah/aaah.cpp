#include <iostream> 

using namespace std;

int main() {
  string input_1, input_2;
  cin >> input_1;
  cin >> input_2;

  if (input_2.size() > input_1.size())
    cout << "no" << endl;
  else 
    cout << "go" << endl;
}

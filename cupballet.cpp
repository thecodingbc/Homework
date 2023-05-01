#include <iostream>
using namespace std;
int main() {
  int cups, swapnum, place, a, b;
  cin >> cups >> swapnum;
  place = cups - 1;
  for(int i = 0; i < swapnum; ++i) {
    cin >> a >> b;
    if (a == place) {
      place = b;
    } else if (b == place) {
      place = a;
    }
  }
  cout << place;
  return 0;
}

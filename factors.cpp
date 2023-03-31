/*(2) Input a natural number N, and output all the prime numbers from 1 to N (including N) according to the definition of prime numbers.
INPUT FORMAT: a natural number n
OUTPUT FORMAT: a prime number per line, output all prime numbers from 1 to N*/

#include <iostream>
using namespace std;
int main() {
  int low = 1;
  int high, i;
  bool is_prime = true;
  cin >>high;
  while (low < high) {
    is_prime = true;
    if (low == 0 || low == 1) {
      is_prime = false;
    }
    for (i = 2; i <= low/2; ++i) {
      if (low % i == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
      cout << low;
    low++;
  }
  return 0;
}
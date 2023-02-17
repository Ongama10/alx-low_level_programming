#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int n;
  srand(time(0));
  n = rand();
  
  int last_digit = n % 10;
  cout << "Last digit of " << n << " is ";

  if (last_digit > 5) {
    cout << last_digit << " and is greater than 5\n";
  } else if (last_digit == 0) {
    cout << "0\n";
  } else {
    cout << last_digit << " and is less than 6 and not 0\n";
  }

  return 0;
}


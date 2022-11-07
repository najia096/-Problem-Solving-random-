#include <cmath>
#include <iostream>
using namespace std;

//determines if n is a prime number
bool isPrime(int n) {
  if (n == 1 || n == 2 || n == 3)
    return 1;
  else {
    int dvs = 2;
    while (dvs <= sqrt(n)) {
      if ((n % dvs) == 0)
        return 0;
      else
        dvs += 1;
    }
    return 1;
  }
}
int main() {
  int n;
  cin >> n;
  int i(1), k(1);
//Finds nth prime number
  while (i <= n) {
    k += 1;
    if (isPrime(k)) {
      i += 1;
    }
  }
  cout << "prime number is-" << k << endl;
}
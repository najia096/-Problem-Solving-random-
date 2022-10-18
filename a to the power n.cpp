//T.C log(n)
#include <iostream>
using namespace std;

int power(int a, int n){
  int result = 1;
  while(n > 0){
      if(n%2 == 1){
        result *= a;
      }
      n = n/2;
      a = a*a;
      }
  return result;
}
int main() {
  cout << "power(9, 0): " << power(9, 0) << endl;
  cout << "power(9, 3): " << power(9, 3) << endl;
  
}
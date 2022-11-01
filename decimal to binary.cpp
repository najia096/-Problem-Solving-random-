#include <iostream>
using namespace std;

int main() {
  int bin[1000], quotient;
  cin >> quotient;
  int i = 0;
  while(quotient > 0){
    bin[i] = quotient % 2;
    quotient /= 2;
    i++;
  }

  for(int j = 0; j < i; j++){
    cout << bin[j];
  }
  
}
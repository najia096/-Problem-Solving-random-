//Read two integer values X and Y. Print the sum of all odd values between them.
#include <iostream>
using namespace std;

int main() {
  int a, b, sum(0);

  cout << "Enter two integer values to print the sum of all odd values between them:" << endl;
  
  cin >> a >> b;

  if(a < b){
    for(int i = a+1; i < b; i++){
    if(i % 2 != 0){
      sum += i;
    }
  }
  }
    
  else if(a > b){
    for(int i = b+1; i < a; i++){
    if(i % 2 != 0){
      sum += i;
    }
  }
  }

  cout << sum << endl;
}
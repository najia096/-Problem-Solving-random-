#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
  double A, B, C, R1, R2, d, d2;

  cout << "Enter A, B, C: " << endl;
  
  cin >> A >> B >> C;

  d = (B*B - 4*A*C);
  d2 = sqrt(B*B - 4*A*C);
  R1 = (d2 - B) / (2*A); 
  R2 = (-d2 - B) / (2*A);
  
  if (d < 0){
    cout << "Impossivel calcular" << endl;
  }

  else if (A == 0){
    cout << "Impossivel calcular" << endl;
  }

  else{
    cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
  }
  
} 
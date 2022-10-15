#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  double p, dif(0), tax;
  cin >> p;

  if(p > 0.00 && p < 2000.01){
    cout << "Isento" << endl;
  }
  else if(p > 2000.00 && p < 3000.01){
    dif = p - 2000.00;
    tax = (dif * 0.08);
    cout << fixed << setprecision(2) << "R$ " << tax << endl;
  }
  else if(p > 3000.00 && p < 4500.01){
    dif = p - 3000.00;
    tax = (dif * 0.18) + (1000 * 0.08);
    cout << fixed << setprecision(2) << "R$ " << tax << endl;
  }
  else if(p > 4500.00){
    dif = p - 4500.00;
    tax = (dif * 0.28) + (1500 * 0.18) + (1000 * 0.08);
    cout << fixed << setprecision(2) << "R$ " << tax << endl;
  }

}
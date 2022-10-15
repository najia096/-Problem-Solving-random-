#include <iostream>
#include<cmath>
using namespace std;

int main() {
  double x;
  cout << "Enter amount:" << endl;
  cin >> x;
  cout << "NOTAS:\n";
  cout << (int)x/100 << " nota(s) de R$ 100.00" << endl;
  double y = fmod(x,100);
  cout << (int)y/50 << " nota(s) de R$ 50.00" << endl;
  x = fmod(y,50);
  cout << (int)x/20 << " nota(s) de R$ 20.00" << endl;
  y = fmod(x,20);
  cout << (int)y/10 << " nota(s) de R$ 10.00" << endl;
  x = fmod(y,10);
  cout << (int)x/5 << " nota(s) de R$ 5.00" << endl;
  y = fmod(x,5);
  cout << (int)y/2 << " nota(s) de R$ 2.00" << endl;
  x = fmod(y,2);

  cout << "MOEDAS:\n";
  cout << (int)x << " moeda(s) de R$ 1.00" << endl;
  y = fmod(x,1);
  y = y*100;
  cout << (int)y/50 << " moeda(s) de R$ 0.50" << endl;
  x = fmod(y,50);
  cout << (int)x/25 << " moeda(s) de R$ 0.25" << endl;
  y = fmod(x, 25);
  cout << (int)y/10 << " moeda(s) de R$ 0.10" << endl;
  x = fmod(y, 10);
  cout << (int)x/5 << " moeda(s) de R$ 0.05" << endl;
  y = fmod(x, 5);
  cout << (int)y/1 << " moeda(s) de R$ 0.01" << endl;


} 
#include <iostream>
using namespace std;

int main() {
int cpass(2002), pass;
  cin >> pass;
  while(pass != cpass){
    cout << "Senha Invalida" << endl;
    cin >> pass;
  }
  cout << "Acesso Permitido" << endl;
}
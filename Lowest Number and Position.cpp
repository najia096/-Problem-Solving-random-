#include <iostream>
using namespace std;

int main() {
  int N, mn(0);
  cout << "How many numbers?" << endl;
  cin >> N;
  cout << "Enter " << N << " numbers: " << endl;
  int X[N];
  for(int i = 0; i < N; i++){
    cin >> X[i];
  }

  mn = X[0];
  
  for(int i = 1; i < N; i++){
    if(mn > X[i]){
      mn = X[i];
    }
  }
  
  for(int i = 0; i < N; i++){
    if(mn == X[i]){
      cout << "Menor valor: " << mn <<endl;
      cout << "Posicao: " << i << endl;
      }
  }

  
}
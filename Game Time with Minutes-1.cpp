#include <iostream>
using namespace std;

int main() {
  int h1, h2, m1, m2, duration_h, duration_m, t;
  cout << "Enter time (Hour & Minute) of starting the game and ending the game: " << endl;
  cin >> h1 >> m1 >> h2 >> m2;
  duration_h = h2 - h1;
  duration_m = m2 - m1;
  
  t = ((h2*60)+m2) - ((h1*60) + m1);


    if(t == 0){
    duration_h = 24;
    t = 0;
    cout << "O JOGO DUROU " << duration_h << " HORA(S) E " << t << " MINUTO(S)" << endl;
  }

    else if(t == 60){
    duration_h = 1;
    t = 0;
    cout << "O JOGO DUROU " << duration_h << " HORA(S) E " << t << " MINUTO(S)" << endl;
  }

    else if(t > 0 && t < 60){
    duration_h = 0;
    cout << "O JOGO DUROU " << duration_h << " HORA(S) E " << t << " MINUTO(S)" << endl;
  }

    else if(t > 60){
    int x, y;
    x = t / 60;
    y = t % 60;
    cout << "O JOGO DUROU " << x << " HORA(S) E " << y << " MINUTO(S)" << endl;
      }



}

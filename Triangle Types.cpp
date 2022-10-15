/*Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES*/

#include <iostream>
using namespace std;

int main() {
  double A, B, C, m;
  cin >> A >> B >> C;
  m = max(A, B);
  m = max(m, C);
  //cout << A << B << C;

  if(A == m){
    A = m;
    B = B;
    C = C;
  }
  else{
    if(B == m){
      B = A;
      A = m;
      C = C;
    }
    else{
      C = A;
      A = m;
      B = B;
    }
  }
  
  if(A >= (B+C)){
    cout << "NAO FORMA TRIANGULO" << endl;
    if( A == B && A == C){
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A == B || A == C || B == C){
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  else if((A*A) == ((B*B)+(C*C))){
    cout << "TRIANGULO RETANGULO" << endl;
    if( A == B && A == C){
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A == B || A == C || B == C){
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }
    
  else if((A*A) > ((B*B)+(C*C))){
    cout << "TRIANGULO OBTUSANGULO" << endl;
    if( A == B && A == C){
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A == B || A == C || B == C){
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }
    
  else if((A*A) < ((B*B)+(C*C))){
    cout << "TRIANGULO ACUTANGULO" << endl;
    if( A == B && A == C){
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A == B || A == C || B == C){
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }
  
  
}
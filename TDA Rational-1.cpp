/*Input sample:
4
1 / 2 + 3 / 4
1 / 2 – 3 / 4
2 / 3 * 6 / 6
1 / 2 / 3 / 4

Output sample:
10/8 = 5/4
-2/8 = -1/4
12/18 = 2/3
4/6 = 2/3
  */
#include <iostream>
#include<algorithm>
using namespace std;

int euclids(int a, int b){
  int divident, divisor, d;
  if(a == 0){
    return 1;
  }
  if(b>a){
    divident = b;
    divisor = a;
  }
  else{
    divident = a;
    divisor = b;
  }

  while(divident % divisor != 0){
    d = divident % divisor;
    divident = divisor;
    divisor = d;
  }
  return divisor;
}

int main() {
  int n, N1, N2, D1, D2, num, den, x, num2, den2;
  char c, op, c1;
  cin >> n;
  for(int i = 0; i < n; i++){
    
    cin >> N1 >> c >> D1 >> op >> N2 >> c1 >> D2;
    
    if(op == '+'){
      num = (N1*D2) + (N2*D1);
      den = D1*D2; 
    }
    
    else if(op == '-'){
      num = (N1*D2) - (N2*D1);
      den = D1*D2; 
    }

    else if(op == '*'){
      num = N1*N2;
      den = D1*D2; 
    }

    else{
      num = N1*D2;
      den = N2*D1; 
    }
    
    x = euclids(num, den);
    num2 = num / x;
    den2 = den / x;

    if(num2 > 0 && den2 > 0){
      cout << num << " / " << den << " = " << num2 << " / " << den2  << endl;  
    }
    else{
      if(den2 < 0){
        den2 = -den2;
        num2 = -num2;
      }
      cout << num << " / " << den << " = " << num2 << " / " << den2 << endl;
    }

  }
  return 0;
}
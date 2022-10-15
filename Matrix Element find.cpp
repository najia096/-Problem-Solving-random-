#include <iostream>
using namespace std;

int mat[1005][1005];
int searchMat(int n, int x, int& posx, int& posy){
  int largest = mat[0][0];
  int smallest = mat[n-1][n-1];
  if(x > largest || x < smallest){
    return -1;
  }
  if(n == 0)
    return -1;

  if(x <= largest && x >= smallest){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        if(x == mat[i][j]){
          posx = i; posy = j;
          return 1;
          }
      }
    }
  }
  return -1;
}

int main() {
      int n;
  cout << "Square matrix- how many rows?" << endl;
    cin>>n;
    cout << "Enter descending numbers elements: " << endl;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        cin>>mat[i][j]; // take input
    }
    int ele;

    cout << "Enter a number to search in the matrix: " << endl;
    cin>>ele;
    int posx=-1;
    int posy=-1;
    int res=searchMat(n, ele, posx, posy); // solve
    if(res==-1)
    cout<<"not found!";
    else
    cout<<"found at: "<<posx<<" "<<posy<<endl; // print result.
    return 0;
  
}
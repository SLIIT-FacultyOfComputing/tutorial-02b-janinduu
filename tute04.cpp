#include <iostream>
using namespace std;

long Factorial (int no);
long nCr(int n, int r);

int main(){
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr( n, r);
  std::cout << std::endl;
  return 0;
}

long nCr( int n,int r){
  long nCr;
  nCr = Factorial (n) /Factorial (r) * Factorial(n-r);

  return nCr;
}

long Factorial (int no)
{
  int fac = 1,i;

  for(i=1; i<=no; i++)
  {
    fac = fac * i;

  }
  return fac;
}
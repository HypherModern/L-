#include <iostream>
#include <cmath>
   using namespace std;

  int Giaithua(int n)
  {
    if (n == 1)
      return 1;
    else
      return n * Giaithua(n - 1);
  }
   
   int main ()
   {
      int n;
      cin >> n;
      cout << Giaithua(n) << endl;
   }

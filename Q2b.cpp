#include <iostream>

using namespace std;

double Series(double n)
{
  double result = (2*n)/((3*n)+2); // computes the result
  cout << "Series(" << n << ") is : " << result << "\n"; // prints result
}

int main()
{
  double n;
  cout << "Enter n: "; // asks for a number
  cin >> n;
  Series(n); // calls the function

  return 0;
}

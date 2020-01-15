#include <iostream>

using namespace std;

int gcd(int m, int n)
{
  int divisor;
  int secondtry;
  divisor = m%n; // creates a variable to check if it equals 0

  if (m <= 0 || n <=0) // error checking
  {
    return 0;
  }
  else
  {
    if (divisor == 0) // checks if there is remainder
    {
      cout << "GCD is: " << n << "\n";
    }
    else
    {
      secondtry = gcd(n,divisor); // if there is a remainder, calls on gcd again but for n and then divisor (remainder)
      //cout << "GCD is: " << secondtry << "\n"; (don't need this part)
    }
  }
}

int main()
{
  int m;
  int n;

  cout << "Enter m: "; // asks the user to input m and n
  cin >> m;
  cout << "Enter n: ";
  cin >>n;
  gcd(m,n); // calls the function gcd

  return 0;
}

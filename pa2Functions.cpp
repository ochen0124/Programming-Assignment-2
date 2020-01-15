#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void initialize() // function that prints out information
{
  cout << "EC327: Introduction to Software Engineering\nFall 2019\nProgramming Assignment 2\nValue of Entries is: 10\n";
}

int factorial(int num)
{
  int i;
  int ans = 1;
  for (i = num; i > 0; i--) // gets the factorial by multiplying i by i-1 in a loop
  {
    ans = ans * i;
  }
  cout << ans;
}

int fibonacci(int num)
{
  int first = 0;
  int second = 1;
  int sum;
  int i;
  for (i = 2; i < num; ++i) // computes fibonacci through looping from 2 since first value and second is 0 and 1 respectively
  {
    sum = first + second;
    first = second;
    second = sum;
  }
  cout << sum;
}

int findNextOddValue(int first,int last)
{
  if (first%2 == 1) // checks if odd
  {
    cout << first + 2 << "\n"; // if odd, adds 2 to the num, if not adds 1 to make it odd
  }
  else
  {
    cout << first + 1 << "\n";
  }

  if (last%2 == 1) // does the same for the "last" value
  {
    cout << last + 2 << "\n";
  }
  else
  {
    cout << last + 1 << "\n";
  }
  return 0;
}

int findNextEvenValue(int first,int last)
{
  if (first%2 == 1) // checks if it is odd
  {
    cout << first + 1 << "\n"; // if its odd, we want an even so we add 1
  }
  else
  {
    cout << first + 2 << "\n"; // if its not odd, we add 2 to get the next even
  }

  if (last%2 == 1) // repeats for "last" value
  {
    cout << last + 1 << "\n";
  }
  else
  {
    cout << last + 2 << "\n";
  }
  return 0;
}

void readDataFromFile(const char *)
{
  string line;
  ifstream thefile ("file.txt"); // reads from a file
  if (thefile.is_open())
  {
    while (getline(thefile,line))
    {
      cout << line << endl;
    }
    thefile.close();
  }
  else // checks if the file is open/valid
  {
    cout << "Can't open file." << "\n";
  }
}

void WriteDataToFile(const char *) // writes to a file the user inputs
{
  ofstream thefile("writefile.txt");
  if (thefile.is_open()) // checks if the file is open/valid
  {
    thefile << "Writing to the file.\n";
  }
  else
  {
    cout << "Can't open file." << "\n";
  }
}

double findSqrtValue(double count)
{
  double ans =  double(sqrt(count)); // square roots the entered value
  cout << ans << "\n";
}

double naturalLog(double count)
{
  double ans;
  ans = log(count); // finds the natural log of the entered value
  cout << ans << "\n";
}

double areaCircle(double count)
{
  double ans;
  ans = (count*count)*3.14; // r^2 * pi, r is entered value
  cout << ans << "\n";
}

double areaSquare(double count)
{
  double ans;
  ans = count * count; // squares the entered value for the area of a square
  cout << ans << "\n";
}

double findNyanCatValue(double count)
{
  double ans;
  double holder = 4 * count;
  ans = pow(holder,count) + count + 10; // gets the nyan cat value lol haha
  cout << ans << "\n";
}

double doMath(double count, char ch)
{
  double ans;
  if (ch == 'S' || ch == 's') // checks if the user wants to use sine
  {
    ans = sin(count); // sines the entered value
    cout << ans << "\n";
  }
  else if (ch == 'N' || ch == 'n') // checks if the user wants to use cosine
  {
    ans = cos(count); // cosines the entered value
    cout << ans << "\n";

  }
  else // else option would be to exp it
  {
    ans = exp(count);
    cout << ans << "\n";
  }
}

double lucky(double count) // used to get a random number based on time and argument
{
  double ans;
  srand(time(0));
  ans = (rand() % int((10*count))) + count; // random number is based on the count or entered value multiplied by a constant and time.
  cout << ans << "\n";
}

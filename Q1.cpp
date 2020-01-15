#include <iostream>
#include <fstream>
#include "pa2Functions.cpp"
#include <string>

using namespace std;

int main()
{
  const int ENTRIES = 10; // sets the max entries to 10
  char ch;
  int num;
  double first;
  int first1;
  double last;
  int last1;
  double delta;
  int i;
  initialize(); // calls forth the function to print information
  cout << "Please enter command code: ";
  cin >> ch; // user enters command code ch
  while (ch != 'q' && ch != 'Q') // while ch is not q or Q, the program runs
  {
    if (ch == 'f' || ch == 'F') // calls the factorial function if ch is f or F
    {
      cout << "Please enter command parameters: ";
      cin >> num;
      factorial(num);
    }
    else if (ch == 'b' || ch == 'B') // calls the fibonacci function if ch is b or B
    {
      cout << "Please enter command parameters: ";
      cin >> num;
      fibonacci(num);
    }
    else if (ch == 'D' || ch == 'd') // calls the odd function
    {
      cout << "Please enter command parameters: ";
      cin >> first1;
      cin >> last1;
      findNextOddValue(first1,last1);
    }
    else if (ch == 'E' || ch == 'e') // calls even function
    {
      cout << "Please enter command parameters: ";
      cin >> first1;
      cin >> last1;
      findNextEvenValue(first1,last1);
    }
    else if (ch == 'I' || ch == 'i') // calls function to read
    {
      readDataFromFile("file.txt");
    }
    else if (ch == 'O' || ch == 'o') // calls function to write
    {
      WriteDataToFile("writefile.txt");
    }
    else if (ch == 'R' || ch == 'r')
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last) // checks for if delta is 0 or less than 0 and if the first value is greater than the last
      {
        cout << "No computation needed.\n"; // if so, prints the message
      }
      else if (delta * ENTRIES > last) // if delta times the max entries of 10 is greater than last
      {
        double count = first;
        for (i = 1; i <= 9; i++) // calls function to compute the first 9 entries
        {
          findSqrtValue(count);
          count = first + (delta * i);
        }
        count = last; // calls function to compute at the value of last
        findSqrtValue(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++) // else computes the 10 entries defined by max
        {
          findSqrtValue(count);
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'L' || ch == 'l') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          naturalLog(count);
          count = first + (delta * i);
        }
        count = last;
        naturalLog(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          naturalLog(count); // calls naturalLog function
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'C' || ch == 'c') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          areaCircle(count);
          count = first + (delta * i);
        }
        count = last;
        areaCircle(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          areaCircle(count); // calls areaCircle function
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'U' || ch == 'u') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          areaSquare(count);
          count = first + (delta * i);
        }
        count = last;
        areaSquare(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          areaSquare(count); // calls areaSquare function
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'Y' || ch == 'y') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          findNyanCatValue(count);
          count = first + (delta * i);
        }
        count = last;
        findNyanCatValue(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          findNyanCatValue(count); // calls NyanCatValue function
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'S' || ch == 's' || ch == 'N' || ch == 'n'|| ch == 'X' || ch == 'x') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          doMath(count, ch);
          count = first + (delta * i);
        }
        count = last;
        doMath(count, ch);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          doMath(count, ch); // calls doMath function which can be sine cosine or exp
          count = first + (delta * i);
        }
      }
    }
    else if (ch == 'K' || ch == 'k') // uses the same checking system as code above
    {
      cout << "Please enter command parameters: ";
      cin >> first;
      cin >> last;
      cin >> delta;
      if (delta <= 0 || first > last)
      {
        cout << "No computation needed.\n";
      }
      else if (delta * ENTRIES > last)
      {
        double count = first;
        for (i = 1; i <= 9; i++)
        {
          lucky(count);
          count = first + (delta * i);
        }
        count = last;
        lucky(count);
      }
      else
      {
        double count = first;
        for (i = 1; i <= 10; i++)
        {
          lucky(count); // calls the lucky function to generate random numbers
          count = first + (delta * i);
        }
      }
    }
    else
    {
      cout << "Invalid command code\n"; // if entered character ch is none of the above codes, prints the message
    }
    cout << "\nPlease enter command code: "; // loops to ask user for code until q or Q is entered for quit
    cin >> ch;
  }
  if (ch == 'q' || ch == 'Q') // if user enters q or Q, exit the program
  {
    exit(0);
  }
  return 0;
}

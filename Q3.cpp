#include <iostream>

using namespace std;

int * ReverseMultiply(int *list, int size)
{
  int i;
  int product = 1; // used for the product of all elements in array
  int doubleplus = 2*size + 1;
  int list1[doubleplus]; // doubles the array size plus 1
  int count = 1; // using a counter for 1 to size
  for (i = 0; i < doubleplus - 1 - size; i++) //loops from 0 to size
  {
    list1[i] = list[size - count]; // for each element from num to 2*size it will be set to the value of size-count until size-count = the 0th element
    product = ((list1[i] * list[size - count]) * product); // product of all elements in array
    count ++; // increasing count to size
  }
  list1[(size)] = product; // puts the product into the last array element
  cout << "One array is: ";
  for (i = 0; i < size; i++) // prints the elements in the arrays
  {
    cout << list[i] << " ";
  }
  for (i = 0; i < doubleplus - size; i++)
  {
    cout << list1[i] << " ";
  }
  cout << "and the address of the zero element is: " << &list[0] << "\n"; // address of the first element
}

int * ReverseAdd(int *list, int size)
{
  int i;
  int doubleminus = (2*size) - 1; // changes array size to 2*size - 1
  int list2[doubleminus];
  int count = 1; // sets up a count from 1
  for (i = 0; i < doubleminus - size; i++) // loops from 0 to double size - 1 - size
  {
    list2[i] = list[size - count] + list[size - count - 1]; // puts the sum of two elements into the i'th element in an array
    count ++; // increases count
  }
  cout << "Two array is: ";
  for (i = 0; i < size; i++) // prints the elements in the array
  {
    cout << list[i] << " ";
  }
  for (i = 0; i < doubleminus - size; i++)
  {
    cout << list2[i] << " ";
  }
  cout << "and the address of the zero element is: " << &list[0] << "\n";
}

int main()
{
  int num;
  int i;
  int size;
  cout << "Enter the number of entries: ";
  cin >> size;
  int list[size]; // initiates array with size number of elements
  for (i = 0; i < size; i++)
  {
    cout << "Entry " << i << " is: ";
    cin >> list[i]; // gets the entries for the array
  }
  cout << "*****\n";
  cout << "Original array is: ";
  for (i = 0; i < size; i++)
  {
    cout << list[i] << " ";
  }
  cout << "and the address of the zero element is: " << &list[0] << "\n"; // prints original array with address of first element

  ReverseMultiply(list,size); // calls the functions
  ReverseAdd(list,size);

  return 0;
}

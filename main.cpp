#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
  bool result = true;
  if (n == 0 && n == 1) { 
    result = false;
  }
  for (int i=2; i<=n/2; i++) {
    if (n%i == 0) {
      result = false;
      break;
    }
  }
  return result;
}


void printArr (int * firstArr) {
  for (int i=0;i<4;i++) {
    printf("%d\n", *firstArr+i);
  }
}


bool isAnagram(string s1, string s2) {
  int l1 = s1.length();
  int l2 = s2.length();

  if (l1 != l2) {
    return false;
  }

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  for (int i=0; i<l1; i++) {
    if (s1[i] != s2[i]) {
      return false;
    }
  }

  return true;
}


int main() {
  cout << "Hello World!\n";
  int number = 23;
  float num1 = 23.454545;
  bool boolean = true; // take true as 1
  bool boolean2 = false; // false as 0
  char ch = 'A';
  string name = "Elon Musk";
  // int is 4 bytes
  // float is 4 bytes
  // double is 8 bytes 
  // bool is 2 bytes 
  // char is 1 byte 
  // string is number of characters without the null character

  cout << number << '\n'
    << num1 << '\n' << boolean << '\n' << boolean2 
    << '\n' << ch << '\n' << name << '\n';

  // if else, loops, functions
  // check number is prime
  int n1 = 23, n2 = 34;
 
  if (isPrime(n1) == 1) {
    cout << "Prime number\n";
  } else {
    cout << "Not a Prime number\n"; 
  }
  
  if (isPrime(n2) == 1) {
    cout << "Prime number\n";
  } else {
    cout << "Not a Prime number\n"; 
  }

  // functions 
  // with different number of arguments, different return types
  // default arguments
  // void functions
  // inline functions

  int n = 89;
  int * nPointer = &n;
  printf("%d\n", *nPointer);

  int numbers[] = {1, 2, 3, 4};
  printf("%d\n", *numbers+1);

  // iterating through array using pointers
  for (int i=0;i<4;i++) {
    printf("%d\n", *numbers+i);
  }

  printArr(numbers);

  string name1 = "Prabhjot";
  string name2 = "rabhjotp";
  if (isAnagram(name1, name2)) {
    printf("True\n");
  } else {
    printf("false\n");
  }

  // 
  return 0;
}


 

// variables done  
// data types done
// if-else elseif else done
// loops done
// functions done
// arrays and pointers done
// stings and string methods

// ---------------------------------------------------
 // bubble sort
  // sorting arrays
  // swap two numbers
  // reverse a string
  // to find the length of array
// ---------------------------------------------------
  // oops concepts
  // classes, methods, instances, objects, static members,
  // static methods, inheritance, polymorphism, types of inheritance, difference bw inheritance and polymorphism, multiple inheritance in java, friend classes, friend methods, 
  // virtual methods, 
// ------------------------------------------------------
  // vector concept in cpp
  // how to use vector common methods like size, sort, reverse, split, lower, upper etc in problem solving

  // time complexities concept, O(n)...
  // space complexities

// -------------------------------------------------------
  // dbms concepts like keys, normalization, normalization forms 1nf, 2nf, 3nf...

  // project related info

/*
Strings are basically array of characters that represent some textual data in a program.

Given two strings, use strcmp() function to compare them and print the result as below:

If both strings are same, print "Equal", If first string is lexicographically smaller than second, print "Small" else print "Large"

Input Format

First line contains the first string.
Second line contains the second string.
Output Format

Print the result based on comparison of string.
Sample Input

Code
Quotient
Sample Output

Small
*/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
  char s1[1000], s2[1000];
  cin.getline(s1, 1000);
  cin.getline(s2, 1000);
  
  int result = strcmp(s1, s2);
  if(result == 0)
    cout << "Equal";
  else if(result < 0)
    cout << "Small";
  else
    cout << "Large";
  
  return 0;
}
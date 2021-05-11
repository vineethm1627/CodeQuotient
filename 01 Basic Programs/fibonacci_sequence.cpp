/*
The Fibonacci numbers are a sequence of numbers where each number after the first two is a sum of the prior two. As an illustration, here is a short sequence given starting values of (0, 1) is (0, 1, 1, 2, 3, 5, 8, 13).

Write a program to generate and print the first n terms of the Fibonacci sequence where n >=1.

Input

Each test case will contains a single integer n where n >=1.
Output

For each input case, generate and print the first n terms of the Fibonacci sequence.


﻿Sample Input

4
Sample Output

0
1
1
2
*/

#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main() {
    // Write your code here
	int n;
  	cin >> n;
  	
  	int f_0 = 0, f_1 = 1, f_2;
  	if(n == 1)
      cout << f_0 << endl;
  	else {
      cout << f_0 << '\n' << f_1 << endl;
      for(int i = 2; i < n; i++) {
		f_2 = f_1 + f_0;
        cout << f_2 << endl;
        f_0 = f_1;
        f_1 = f_2;
      }
    }
    // Return 0 to indicate normal termination
    return 0;
}
/*
The Fibonacci numbers are a sequence of numbers where each number after the first two is a sum of the prior two. As an illustration, here is a short sequence given starting values of (0, 1) is (0, 1, 1, 2, 3, 5, 8, 13).

Write a program to generate and print the first n terms of the Fibonacci sequence using recursion in reverse order.

Input

Each test case will contains a single integer n where n >=1.
Output

For each input case, generate and print the first n terms of the Fibonacci sequence in reverse order.


Sample Input

4
Sample Output

2
1
1
0
Constraints : Do not declare any global variables. Do not use any loops and arrays; you must use recursion. You can declare as many primitive variables like integers as you like. You are allowed to define other "helper" functions if you like; they are subject to these same constraints.
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void fib_rev(int f_0, int f_1, int n) {
	// base case: all the elements are printed
  	if(n == 0)
      return;
  	int f_2 = f_0 + f_1;
  	// recursive call
  	fib_rev(f_1, f_2, n - 1);
  	// print the result
  	cout << f_2 << endl;
}

int main() {
  	
  	int n, f_0 = 0, f_1 = 1;
  	cin >> n;
  
  	if(n == 1)
      cout << f_0 << endl;
  	else {
    	fib_rev(f_0, f_1, n - 2);
      	cout << f_1 << '\n' << f_0 << endl;
    }
  
	return 0;
}
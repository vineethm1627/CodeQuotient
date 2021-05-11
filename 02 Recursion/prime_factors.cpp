#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
/*
Write a program that accepts an integer n (where n >=2) and print all the prime factors of n using recursion.

Sample Input

24
Sample Output

2
2
2
3
Constraints : Do not declare any global variables. Do not use any loops; you must use recursion. You can declare as many primitive variables like ints as you like. You are allowed to define other "helper" functions if you like; they are subject to these same constraints.
*/

void primeFactors(int n) {
	static int i = 2; // first prime number
  	// base case
  	if(n == 1) {
       	// recursion over: resetting the static member
    	i = 2; 
      	return;
    }
  	else if(n % i == 0) {
          cout << i << endl;
          // recursive call
          primeFactors(n / i);
    }
  	else {
    	i++; // increase the factors
      	primeFactors(n);
    }
}

int main() {
  	int n;
  	cin >> n;
  	
  	primeFactors(n);
  	
	return 0;
}
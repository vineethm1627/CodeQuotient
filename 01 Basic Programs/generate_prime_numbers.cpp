/*
Write a program to generate and print all the primes in the first n positive integers. 

Input

Each test case will contains a single integer n where n >=2.

Output

For each input case, generate and print all the primes in the first n positive integers.

Sample Input

10
Sample Output

2
3
5
7
*/

#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;

void sieveOfEratosthenes(int n) {
	bool prime[n + 1];
  	fill(prime, prime + n + 1, true);
  	for(int p = 2; p * p <= n; p++) {
    	if(prime[p]) {
          // update all the multiples of p >= p^2
          for(int i = p * p; i <= n; i += p) 
            prime[i] = false;
        }
    }
  	for(int i = 2; i <= n; i++) {
      if(prime[i])
        cout << i << endl;
    }
}

int main() {
    // Write your code here
  	int n;
  	cin >> n;
  
  	sieveOfEratosthenes(n);
  
    // Return 0 to indicate normal termination
    return 0;
}
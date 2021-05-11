/*
Write a program to reverse a number.

Input

Each test case will contain number n as test case where 0<=n<=99999.

Output

For each input case, calculate and print the reverse of the number.

Sample Input

1234
Sample Output

4321
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int reverse(int n, int &rev) {
	// base case
  	if(n == 0)
    	return 0;
  	rev = rev * 10 + (n % 10);
  	// recursive call
  	reverse(n / 10, rev);
  	return rev;
}

int main() {
	int n;
  	cin >> n;
  	int rev = 0;
  	cout << reverse(n, rev) << endl;
  
    return 0;
}
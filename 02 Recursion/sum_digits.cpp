/*
Write a program to find the sum of all the digits of a number.

Input

First line of input will contain a number N = number of test cases. Next N lines will contain number n as test case where 0<=n<=9999.

Output

For each input case, calculate and print sum of its digits.

Sample Input

4
1234
456
12
1
Sample Output

10
15
3
1
*/

#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;

int sum_digits(int n) {
	// base case
  	if(n == 0)
    	return 0;
  	// recursive calls
  	return n % 10 + sum_digits(n / 10);
}

int main() {
    // Write your code here
	int T, n;
  	cin >> T;
  
  	while(T--) {
    	cin >> n;
      	cout << sum_digits(n) << endl;
    }
    // Return 0 to indicate normal termination
    return 0;
}
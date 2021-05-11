/*
Given a number n, devise an algorithm to compute its square root.

Input

First line will contain T=number of test case, next T lines will contains an integer n where n >=1.

Output

For each test case, calculate and print the square root of n with 2 decimal places (Round to nearest numbers e.g. 4.472 to 4.47 & 3.157 to 3.16) in new lines.
Sample Input

6
36
16
9
20
1
11
Sample Output

6.00
4.00
3.00
4.47
1.00
3.32
*/

#include <iomanip>
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

float squareRoot(int n, int p = 4) {
  int start = 0, end = n;
  int mid;
  float result = 0.00;
  
  // computing the integer part
  while(start <= end) {
    mid = start + (end - start) / 2;
    if(mid * mid == n) {
      result = mid;
      break;
    }
    // narrow down the search space
    if(mid * mid < n) {
      start = mid + 1;
      result = mid;
    }
    else
      end = mid - 1;
  }
  
  // computing the fraction part
  float increment = 0.1;
  for(int i = 0; i < p; i++) {
    while(result * result <= n) {
      result += increment;
    }
    result -= increment;
    increment /= 10;
  }
  return result;
}

using namespace std;

int main() {
    // Write your code here
	int T, n;
  	cin >> T;
  
  	while(T--) {
      cin >> n;
      cout << fixed << setprecision(2) << squareRoot(n) << endl;
    }
    // Return 0 to indicate normal termination
    return 0;
}
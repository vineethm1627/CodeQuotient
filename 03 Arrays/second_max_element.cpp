/*
Write a program to find the 2nd maximum element in an array.

Input

Assume the size of array as 5. Each test case will have 5 elements in five different lines.

Output

For each test case, print the 2nd maximum element in the list
Sample Input 1

3
10 
20 
4
7
Sample Output 1

10
Sample Input 2

20 
10 
40 
4 
100
Sample Output 2

40
Return 0 , if all the values are same.
*/

#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

#include <climits>
int main() {
    // Write your code here
  	int first = INT_MIN, second = INT_MIN;
  	int x;
  	for(int i = 0; i < 5; i++) {
      cin >> x;
      if(x > first) {
        second = first;
        first = x;
      }
      else if(x > second && x != first) 
        second = x;
    }
	// final check
  	if(second == INT_MIN) 
      cout << 0 << endl;
  	else
      cout << second << endl;
  
    return 0;
}
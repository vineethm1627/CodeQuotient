/*
Given a sorted list of integers with duplicates, find the count of a given number in this list in O(log n).

Input

First line of input will contain a positive integer T = number of test cases. Each test case will contain 2 lines. 
First line of each test case will contain two number N = number of elements in list and K separated by space. 
Next line will contain N space separated integers.
Output

For each test case, print on a single line, the count of number K in this list.
Sample Input

3
10 5
1 2 2 5 5 5 7 7 7 8
10 1
1 1 1 1 1 1 1 2 2 3
20 2
1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4
Sample Output

3
7
5
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int search(int *arr, int n, int target) {
  int start = 0, end = n;
  while(start < end) {
    int mid = start + (end - start) / 2;
  	if(arr[mid] >= target)
      end = mid;
  	else
      	start = mid + 1;
  }
  return start;
} 

int main() {
  int T, n, k;
  cin >> T;
  
  while(T--) {
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
      cin >> arr[i];
    
    const int first = search(arr, n, k);
    const int last = search(arr, n, k + 1);
    
    cout << last - first << endl;
  }
  
  return 0;
}
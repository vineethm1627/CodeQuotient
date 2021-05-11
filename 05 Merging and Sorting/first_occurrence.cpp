/*
Given a sorted list of integers, find the position of first occurrence of a given number K in this list in O(log n) time.

Input

First line of input will contain a positive integer T = number of test cases. Each test case will contain two lines. First line will contain two positive integer N = number of elements in list and K. Next line will contain N space separated integers in increasing order.

Output

For each test case, print on a single line the index of first occurrence of K in the list on 0-based index. Print -1 if you cannot find K in the list.
Sample Input

3
10 4
1 2 4 4 4 4 5 8 9 10
15 7
1 2 3 3 5 6 7 7 7 7 7 8 8 8 8
9 1
-5 -4 -3 -2 -1 0 0 0 1
Sample Output

2
6
8
*/

#include <bits/stdc++.h>
using namespace std;

int first_occur(vector<int> &arr, int target) {
  int start = 0, end = arr.size();
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
      vector<int> arr(n);
      for(int i = 0; i < n; i++)
      	cin >> arr[i];
      int first = first_occur(arr, k);
      if(first == n || arr[first] != k)
        cout << -1 << endl;
      else
        cout << first << endl;
    }
  
   	return 0;
}
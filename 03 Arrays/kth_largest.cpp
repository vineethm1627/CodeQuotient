/*
Write a method called kthLargest that accepts an integer k and an array arr as its parameters and returns the element such that k elements have greater or equal value. If k = 0, return the largest element; if k = 1, return the second largest element, and so on.

For example, if the array passed contains the values {74, 85, 102, 99, 101, 56, 84} and the integer k passed is 2, your method should return 99 because there are two values at least as large as 99 (101 and 102).

Assume that 0 <= k < length of array.
Input Format

First line contains the number of test cases i.e. T
Each test case T contains the integer K (In first line), the number of elements in array N (In 2nd line) and N integers will follow.
Output Format

Print the kth largest number from array.
Sample Input

1 // Number of Testcases
1 // K
3 // Size of Array
1 // Elements of Array
2
3
Sample Output

2
*/

#include <queue>
int kthLargest(int arr[], int n, int k){
  // Write your code here
  priority_queue<int, vector<int>, greater<int> > minHeap;
  for(int i = 0; i <= k; i++)
    minHeap.push(arr[i]);
  for(int i = k + 1; i < n; i++) {
    if(arr[i] > minHeap.top()) {
      minHeap.pop();
      minHeap.push(arr[i]);
    }
  }
  return minHeap.top();
}
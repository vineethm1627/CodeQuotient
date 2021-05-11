/*
Write a function findKSmallest() which accepts an array and an integer k and return the kth smallest element in the given array.

Constraints: 1 <= array_size <= 50

Input Format

First Line will contain an integer N denoting the size of array.
Second line contains N integers separated by space as elements of array.
Third line contains an integer k.
Output Format

Print the kth smallest element.
Sample Input

5
1 12 6 8 3
3
Sample Output

6
*/

#include <queue>
int findKSmallest(int* arr, int n, int k) {
  priority_queue<int, vector<int> > maxHeap;
  for(int i = 0; i < k; i++)
    maxHeap.push(arr[i]);
  for(int i = k; i < n; i++) {
    if(arr[i] < maxHeap.top()) {
      maxHeap.pop();
      maxHeap.push(arr[i]);
    }
  }
  return maxHeap.top();
}
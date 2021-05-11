/*
Input elements in array and find frequency of each element in array. Complete a given program to enter an array having n unique elements and find the frequency of each element in array.

Sample Input

5    // no of elements
2
1
2
3
4
Sample Output

2 occurs 2 times
1 occurs 1 times
3 occurs 1 times
4 occurs 1 times
*/

#include <bits/stdc++.h>
using namespace std;

void printFreq(vector<int> &arr, int n) {
  vector<int> visited(n, false);
  for(int i = 0; i < n; i++) {
    if(visited[i])
      continue;
    int count = 1;
    for(int j = i + 1; j < n; j++) {
      if(arr[i] == arr[j]) {
        visited[j] = true;
        count++;
      }
    }
    cout << arr[i] << " occurs " << count << " times" << endl;
  } 
}

int main() {
  int n; 
  cin >> n;
  
  vector<int> arr(n);
  for(int i = 0; i < n; i++) 
    cin >> arr[i];
    
  printFreq(arr, n); 
  
  return 0;
}
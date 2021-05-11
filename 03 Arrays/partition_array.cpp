/*
Given a randomly ordered array (arr) of n elements, function partitionArray(int arr[], int n, int x) partition the elements into two subsets such that elements <= x are in left subset and elements > x are in the right subset.

Initial code of partitionArray(int arr[], int n, int x) which is given fails in some test cases. Identify those test cases and make the necessary changes in the function so that it gives the desired output in all the cases.

Constraints : Don't rewrite the function only make the required changes in the given code.

Input

First line of test case will contain two number n (number of elements in list ) and x (number to use for partition) separated by space. Next line will contain N space separated integers.

Output

Print the array after partition one element in each line.

Sample Input

10 17
28 26 25 11 16 12 24 29 6 10
Sample Output

10
6
12
11
16
25
24
29
26
28
*/

void partitionArray(int arr[], int n, int x)
{
  int i, j, temp;
  i = 0;
  j = n-1;
  
  while (i < j) {
    while (arr[i] <=x)
       i++;
    while (arr[j] > x)
       j--;
    
    if(i < j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }
    i++;
    j--;
  }  
}
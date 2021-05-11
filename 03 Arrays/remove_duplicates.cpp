/*
Write a function removeDuplicates which receives a array as input and remove the duplicate elements from the array. After the function call, the array will contain a set of unique elements..

Suppose the array contains the following values:

{7, 7, 18, 18, 18, 18, 21, 39, 39, 42, 42, 42}
After a call to removeDuplicates(arr, size); , the array should store the following values:

{7, 18, 21, 39, 42}
If the array is empty or does not contain any duplicate values, calling your function should have no effect.

Input Format

First line contains the number of elements in array N.
and N integers will follow in next N lines.
Output Format

Print the non-duplicate elements of array.
Sample Input

5
1
1
2
3
3
Sample Output

1
2
3
*/

void removeDuplicates(int *arr, int *n) {
  int i = 0, j = 1;
  while(j < *n) {
    if(arr[j] == arr[i])
      j++;
    else {
      arr[++i] = arr[j];
    }
  }
  *n = i + 1;
}
/*
Write a function countWords() to count the numbers of words in a string.

A word is defined as text separated by space(' ') or multiple spaces.

The function will receive a string as input and return the numbers of words in this string. 

Input Format

A single line of input which consists of the string whose words is to be counted
Output Format

Print the count the numbers of words in a string


﻿﻿Sample Input

Codequotient get better  at coding
Sample Output

5
*/

int countWords(char str[]) {
  int count = 0;
  // empty string
  if(str[0] == '\0')
    return count;
  for(int i = 1; str[i]; i++) {
    if(str[i - 1] == ' ')
      continue;
    if(str[i] == ' ')
      count++;
  }
  return count + 1;
}
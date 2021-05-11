/*
Given two strings, find whether both are rotations of each other or not. For example,

Given str1 = abacd and str2 = acdab, we can get str1 by rotating str2 and,

Given str1 = coder and str2 = cored, we can not get str1 by rotating str2.

﻿Input Format

The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two strings str1 and str2. 
Output Format

For each test case, print YES or NO in new lines.
Sample Input

2
abacd
acdab
coder
cored
Sample Output

YES
NO
*/

// return 1 for YES and 0 for NO.
int isRotation(string str1, string str2){
  // Write your code here
  // initial check
  if(str1.size() != str2.size())
    return 0;
  str1 += str1;
  if(str1.find(str2) != string::npos)
    return 1;
  return 0;
}
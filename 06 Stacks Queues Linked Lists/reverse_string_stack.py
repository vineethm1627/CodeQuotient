'''
Given a string, your task is to reverse it using stack.

Input

The first line of input will contains an integer T denoting the no of test cases. Then T test cases follow. 
Each test case contains a number N.
Then N strings follow which are to be reversed
The function void reverseString() takes the string as input and return the reversed string using stack provided.

Output

For each test case, you have to reverse the string in the array given. You are required to complete the methods given only.

Sample Input

1 // No. of test cases
2 // No. of strings
CodeQuotient
Code
Sample Output

tneitouQedoC
edoC﻿
'''

# stack has already defined functions push(j),pop(),isEmpty(),isFull()
def reverseString(stack,string):
  # Write your code here
  for c in string:
    stack.push(c)
  result = ""
  while(stack.isEmpty() == False):
    result += stack.pop()
  
  return result
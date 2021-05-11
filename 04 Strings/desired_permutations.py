'''
A permutation of string is an arrangement of its characters in some specific order. A given string of size n will have n! permutations possible.

You need to write a function to find the desired permutations of a given string. Desired means, all permutation but with restrictions for one character at specific position.

Note: If the character given is not present in the string, then print all permutations of given string.

Input Format

First lines contains a string to be permuted
Second line contains a character for condition
Third line contains the position from left (starting from index 0) to be restricted.
Output Format

Print the desired permutations of given string in lexicographical order
Sample Input

ABC
B
1
Sample Output

ACB
BAC
BCA
CAB
'''
# The first argument is the string. You need to save all permutations in the array passed as 4th argument named permutationsArr.
# Dont print the permutations as they will be printed after needed processing (sorting in lexicographical order) at back end.
def desiredPermutations(string,ch,pos,permutationsArr):
  # Write your code here
  from itertools import permutations
  string = sorted(string)
  # get all the permutations in order
  permutations = ["".join(i) for i in permutations(string)]
  # filter the results
  for word in permutations:
    if(word[pos:pos + 1] != ch):
      permutationsArr.append(word)
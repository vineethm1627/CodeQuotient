/*
Two strings A and B are called anagrams if they contain all the same characters in the same frequencies. Given two strings, find whether both are anagram of each other or not.

Complete the function isAnagram() that will take two strings as parameters and return 1 if they are anagram and return 0 otherwise.

Input Format

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. 
Each test case contains two strings str1, str2 in two lines. 
Output Format

For each test case, print Yes or No in new lines.


Sample Input

3
act
cat
CodeQuotient
QuotientCode
Hello
Hillo
Sample Output

Yes
Yes
No
*/

int isAnagram(string str1, string str2){
	// Write your code here
  	int freq[256] = {0};
  	int i = 0;
  	for(; str1[i] && str2[i]; i++) {
      freq[str1[i]]++;
      freq[str2[i]]--;
    }
  	if(str1[i] || str2[i])
      return 0;
  	for(i = 0; i < 256; i++) {
      if(freq[i])
        return 0;
    }
  	return 1;
}
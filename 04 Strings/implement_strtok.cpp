/*
The strtok function will take two parameters i.e. a string and a delimiter. It then split the string by the delimiter. For example, printing all words from a comma separated list.

Write your own implementation of strtok function in C.

Input

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains two strings str1, delim.

Function char* strtok_code(char *str1, char delim) will take a string and a delimiter as parameters and returns the delimited words from string till end of it, and return NULL if no more token remains.

Output

For each test case, print all tokens in new lines.

Sample Input

2
Code-Quotient -
Hello/Hi/Hello /
Sample Output

Code
Quotient
Hello
Hi
Hello
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void strtok_code(string s, char delim){
  // Complete the function
  string temp;
  for(int i = 0; s[i]; i++) {
   	if(s[i] != delim) {
      temp += s[i];
    }
    else {
      cout << temp << endl;
      temp.clear();
    }
  }
  cout << temp << endl;
}

int main()
{
    int t,i,j=0;
    string str;
    char ch;
    cin>>t;
    while(t--){
        cin>>str>>ch;
        // Write your code here...
      	strtok_code(str, ch);
    }
}
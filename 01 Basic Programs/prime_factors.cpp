/*
Write a function primeFactors that accepts an integer parameter n (where n >=2) and print all the prime factors of n.

Sample Input

24
Sample Output

2
2
2
3

*/

void primeFactors(int n) {
  while(n % 2 == 0) {
    cout << 2 << endl;
    n /= 2;
  }
  for(int i = 3; i * i <= n; i += 2) {
    if(n % i == 0) {
      while(n % i == 0) {
        cout << i << endl;
        n /= i;
      }
    }
  }
  if(n > 1)
    cout << n << endl;
}
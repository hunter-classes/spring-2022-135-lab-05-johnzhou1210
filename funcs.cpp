#include <iostream>

#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
  if (d == 0){return false;}
  return n%d==0;
}

bool isPrime(int n)
{
  if (n < 2){return false;} if (n == 2){return true;}
  for (int i = n; i > 2; i--)
  {
    if (isDivisibleBy(n,i-1) == true)
    {
      // std::cout << n << " is divisible by " << i-1 << "\n";
      return false;
    }
  }
  return true;
}

int nextPrime(int n)
{
  int nxtP = n + 1;
  while (!isPrime(nxtP))
  {
    nxtP++;
  }
  return nxtP;
}

int countPrimes(int a, int b)
{
  int numPrimes = 0;
  for (int i = a; i <= b; i++)
  {
    if (isPrime(i))
    {
      numPrimes++;
    }
  }
  return numPrimes;
}

bool isTwinPrime(int n)
{
  return isPrime(n) && (isPrime(n-2) || isPrime(n+2));
}

int nextTwinPrime(int n)
{
  int nxtP = n + 1;
  while (!isTwinPrime(nxtP))
  {
    nxtP++;
  }
  return nxtP;
}

int prevTwinPrime(int n)
{
    int prevP = n - 1;
    while (!isTwinPrime(prevP))
    {
      prevP--;
    }
    return prevP;
}

int largestTwinPrime(int a, int b)
{
  int left = a; int right = b;
  int nxt = nextTwinPrime(a);
  if (nxt > b){return -1;}
  while (nxt >= left && nxt <= right)
  {
    nxt = nextTwinPrime(nxt);
  }
  return prevTwinPrime(nxt);
}

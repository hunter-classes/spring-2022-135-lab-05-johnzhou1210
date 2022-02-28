#include <iostream>

#include "funcs.h"

bool isDivisibleBy(int a, int b);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);

int main()
{
  std::cout << std::boolalpha;

  std::cout << "=================TASK A==================\n";
  std::cout << "isDivisibleBy(8,3) returns " << isDivisibleBy(8,3) << "\n";
  std::cout << "isDivisibleBy(3,-2) returns " << isDivisibleBy(3,-2) << "\n";
  std::cout << "isDivisibleBy(2,0) returns " << isDivisibleBy(2,0) << "\n";
  std::cout << "isDivisibleBy(0,6) returns " << isDivisibleBy(0,6) << "\n";
  std::cout << "isDivisibleBy(64,16) returns " << isDivisibleBy(64,16) << "\n";
  std::cout << "isDivisibleBy(0,0) returns " << isDivisibleBy(0,0) << "\n";
  std::cout << "isDivisibleBy(5,5) returns " << isDivisibleBy(5,5) << "\n\n";

  std::cout << "=================TASK B==================\n";
  std::cout << "isPrime(2) returns " << isPrime(2) << "\n";
  std::cout << "isPrime(8) returns " << isPrime(8) << "\n";
  std::cout << "isPrime(-2) returns " << isPrime(-2) << "\n";
  std::cout << "isPrime(47) returns " << isPrime(47) << "\n";
  std::cout << "isPrime(13) returns " << isPrime(13) << "\n";
  std::cout << "isPrime(256) returns " << isPrime(256) << "\n";
  std::cout << "isPrime(659) returns " << isPrime(659) << "\n\n";

  std::cout << "=================TASK C==================\n";
  std::cout << "nextPrime(2) returns " << nextPrime(2) << "\n";
  std::cout << "nextPrime(8) returns " << nextPrime(8) << "\n";
  std::cout << "nextPrime(256) returns " << nextPrime(256) << "\n";
  std::cout << "nextPrime(-124) returns " << nextPrime(-124) << "\n";
  std::cout << "nextPrime(0) returns " << nextPrime(0) << "\n";
  std::cout << "nextPrime(43) returns " << nextPrime(43) << "\n";
  std::cout << "nextPrime(25) returns " << nextPrime(25) << "\n\n";

  std::cout << "=================TASK D==================\n";
  std::cout << "countPrimes(-5,7) returns " << countPrimes(-5,7) << "\n";
  std::cout << "countPrimes(7,7) returns " << countPrimes(7,7) << "\n";
  std::cout << "countPrimes(14,16) returns " << countPrimes(14,16) << "\n";
  std::cout << "countPrimes(23,47) returns " << countPrimes(23,47) << "\n";
  std::cout << "countPrimes(-189,46) returns " << countPrimes(-189,46) << "\n";
  std::cout << "countPrimes(0,0) returns " << countPrimes(0,0) << "\n";
  std::cout << "countPrimes(2,4) returns " << countPrimes(2,4) << "\n\n";

  std::cout << "=================TASK E==================\n";
  std::cout << "isTwinPrime(2) returns " << isTwinPrime(2) << "\n";
  std::cout << "isTwinPrime(-4) returns " << isTwinPrime(-4) << "\n";
  std::cout << "isTwinPrime(17) returns " << isTwinPrime(17) << "\n";
  std::cout << "isTwinPrime(23) returns " << isTwinPrime(23) << "\n";
  std::cout << "isTwinPrime(31) returns " << isTwinPrime(31) << "\n";
  std::cout << "isTwinPrime(63) returns " << isTwinPrime(63) << "\n";
  std::cout << "isTwinPrime(11) returns " << isTwinPrime(11) << "\n\n";

  std::cout << "=================TASK F==================\n";
  std::cout << "nextTwinPrime(2) returns " << nextTwinPrime(2) << "\n";
  std::cout << "nextTwinPrime(-22) returns " << nextTwinPrime(-22) << "\n";
  std::cout << "nextTwinPrime(19) returns " << nextTwinPrime(19) << "\n";
  std::cout << "nextTwinPrime(0) returns " << nextTwinPrime(0) << "\n";
  std::cout << "nextTwinPrime(11) returns " << nextTwinPrime(11) << "\n";
  std::cout << "nextTwinPrime(29) returns " << nextTwinPrime(29) << "\n";
  std::cout << "nextTwinPrime(17) returns " << nextTwinPrime(17) << "\n\n";

  std::cout << "=================TASK G==================\n";
  std::cout << "largestTwinPrime(2,6) returns " << largestTwinPrime(2,6) << "\n";
  std::cout << "largestTwinPrime(-3,-2) returns " << largestTwinPrime(-3,-2) << "\n";
  std::cout << "largestTwinPrime(0,3) returns " << largestTwinPrime(0,3) << "\n";
  std::cout << "largestTwinPrime(2,8) returns " << largestTwinPrime(2,8) << "\n";
  std::cout << "largestTwinPrime(16,16) returns " << largestTwinPrime(16,16) << "\n";
  std::cout << "largestTwinPrime(2,31) returns " << largestTwinPrime(2,31) << "\n";
  std::cout << "largestTwinPrime(16,28) returns " << largestTwinPrime(16,28) << "\n\n";

  return 0;
}

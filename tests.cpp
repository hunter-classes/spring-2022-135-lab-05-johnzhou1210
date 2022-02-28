#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

bool isDivisibleBy(int a, int b);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);

TEST_CASE("Test isDivisibleBy function")
{
  CHECK(isDivisibleBy(8,3) == false);
  CHECK(isDivisibleBy(3,-2) == false);
  CHECK(isDivisibleBy(2,0) == false);
  CHECK(isDivisibleBy(0,6) == true);
  CHECK(isDivisibleBy(64,16) == true);
  CHECK(isDivisibleBy(0,0) == false);
  CHECK(isDivisibleBy(5,5) == true);
}

TEST_CASE("Test isPrime function")
{
  CHECK(isPrime(2) == true);
  CHECK(isPrime(8) == false);
  CHECK(isPrime(-2) == false);
  CHECK(isPrime(47) == true);
  CHECK(isPrime(13) == true);
  CHECK(isPrime(256) == false);
  CHECK(isPrime(659) == true);
}

TEST_CASE("Test nextPrime function")
{
  CHECK(nextPrime(2) == 3);
  CHECK(nextPrime(8) == 11);
  CHECK(nextPrime(256) == 257);
  CHECK(nextPrime(-124) == 2);
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(43) == 47);
  CHECK(nextPrime(25) == 29);
}

TEST_CASE("Test countPrimes function")
{
  CHECK(countPrimes(-5,7) == 4);
  CHECK(countPrimes(7,7) == 1);
  CHECK(countPrimes(14,16) == 0);
  CHECK(countPrimes(23,47) == 7);
  CHECK(countPrimes(-189,46) == 14);
  CHECK(countPrimes(0,0) == 0);
  CHECK(countPrimes(2,4) == 2);
}

TEST_CASE("Test isTwinPrime function")
{
  CHECK(isTwinPrime(2) == false);
  CHECK(isTwinPrime(-4) == false);
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(23) == false);
  CHECK(isTwinPrime(31) == true);
  CHECK(isTwinPrime(63) == false);
  CHECK(isTwinPrime(11) == true);
}

TEST_CASE("Test nextTwinPrime function")
{
  CHECK(nextTwinPrime(2) == 3);
  CHECK(nextTwinPrime(-22) == 3);
  CHECK(nextTwinPrime(19) == 29);
  CHECK(nextTwinPrime(0) == 3);
  CHECK(nextTwinPrime(11) == 13);
  CHECK(nextTwinPrime(29) == 31);
  CHECK(nextTwinPrime(17) == 19);
}

TEST_CASE("Test largestTwinPrime function")
{
  CHECK(largestTwinPrime(2,6) == 5);
  CHECK(largestTwinPrime(-3,-2) == -1);
  CHECK(largestTwinPrime(0,3) == 3);
  CHECK(largestTwinPrime(2,8) == 7);
  CHECK(largestTwinPrime(16,16) == -1);
  CHECK(largestTwinPrime(2,31) == 31);
  CHECK(largestTwinPrime(16,28) == 19);
}

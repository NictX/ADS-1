// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int b = 2;
  int value = n;
  for (int i = 1; i < value; i++) {
    int x = 1;
    while (x != 0) {
      b++;
      x = 0;
      for (int y = 2; y < b; y++) {
        if (b % y == 0) {
          x++;
        }
      }
    }
  }
  return b;
}

uint64_t nextPrime(uint64_t value) {
  int n = value;
  int x = 1;
  while (x != 0) {
    n++;
    x = 0;
    for (int y = 2; y < n; y++) {
      if (n % y == 0) {
        x++;
      }
    }
  }
  return n;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t n = 2;
  uint64_t summ = 0;
  for (uint64_t  i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      summ += i;
    }
  }
  return summ;
}

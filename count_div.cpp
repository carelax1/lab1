#include "count_div.hpp"
#include <cmath> // for std::abs
#include <iostream>

// anonymous namespace for internal linkage
namespace {
int sqrti(int x) {
  const double result = std::sqrt(x);
  return static_cast<int>(result);
}
} // namespace

int count_div(int x) {
	const int mod = std::abs(x);
	const double root = std::sqrt(mod);
	int count = 2; // 1 and mod
	for (int i = 2; i < root; i++) {
		if (mod % i == 0) count += 2;
	}
	if (mod / root == root) count++;
	return count;
}

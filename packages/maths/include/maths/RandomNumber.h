#pragma once

#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

namespace maths {

class RandomNumber {

public:
  RandomNumber();
  ~RandomNumber() = default;

  int generate();

private:
  std::random_device r;
  std::default_random_engine e1;
  std::uniform_int_distribution<int> uniform_dist;
};

} // namespace maths

//
// Created by oleg on 17.11.2021.
//
//Copyright
#include <header.hpp>
std::pair<float, float> minMax(const std::vector<float>& a) {
  float max = std::numeric_limits<float>::min();
  float min = std::numeric_limits<float>::max();
  int n;
  n = a.size();
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }
  if (n == 0) {
    return std::make_pair(std::numeric_limits<float>::min(),
                          std::numeric_limits<float>::max());
  } else {
    return std::make_pair(min, max);
  }
}

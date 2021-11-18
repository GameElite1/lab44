//
// Created by oleg on 17.11.2021.
//
#include <header.hpp>
float mean(const std::vector<float>& a) {
  int s = 0, n;

  n = size(a);
  if (n != 0) {
    for (int i = 0; i < n; ++i) {
      s += a[i];
    }
    return s / n;
  } else {
    return 0;
  }
  return 0;
}
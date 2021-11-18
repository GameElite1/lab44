//
// Created by oleg on 17.11.2021.
//
#include <header.hpp>
float argmax(const std::vector<float>& a) {
  int n, max = -999999, b;
  n = size(a);
  if (n != 0) {
    for (int i = 0; i < n; ++i) {
      if (a[i] > max) {
        b = i;
        max = a[i];
      }
    }
    return b;
  } else {
    return -1;
  }
  return 0;
}

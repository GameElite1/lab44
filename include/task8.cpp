//
// Created by oleg on 18.11.2021.
//
#include <header.hpp>
std::string join(const std::vector<std::string>& a, const std::string& sep) {
  int n;
  n = size(a);
  std::string b = "";
  for (int i = 0; i < n; ++i) {
    b += a[i];
    if (i < n - 1) {
      b += sep;
    }
  }
  return b;
}

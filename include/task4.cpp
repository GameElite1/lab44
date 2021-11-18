//
// Created by oleg on 18.11.2021.
//
//Copyright
#include <header.hpp>
void sort(std::vector<float>& a) {
  int n;
  n = size(a);
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i; j--) {
      if (a[j - 1] > a[j]) {
        a[n] = a[j - 1];
        a[j - 1] = a[j];
        a[j] = a[n];
      }
    }
  }
}

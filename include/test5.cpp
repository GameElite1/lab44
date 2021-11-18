//
// Created by oleg on 18.11.2021.
//
//Copyright
#include <header.hpp>
bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  int n, m;
  n = size(vec);
  for (int i = 0; i < n; ++i) {
    if (vec[i] < 0) {
      removed_element = vec[i];
      auto iter = vec.cbegin();
      vec.erase(iter + i);
      return true;
      break;
    }
  }
  m = size(vec);
  if (m == n) {
    removed_element = 0;
    return false;
  }
  return false;
}

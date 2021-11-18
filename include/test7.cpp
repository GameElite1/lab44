//
// Created by oleg on 18.11.2021.
//
//Copyright
#include <header.hpp>
std::vector<std::string> split(const std::string& str, char sep) {
  std::vector<std::string> a;
  std::vector<std::string> b;
  int n;
  n = str.length();
  std::string c = "";
  for (int i = 0; i < n; ++i)
    if (str[i] == sep) {
      a.push_back(c);
      c = "";
    } else {
      c += str[i];
    }
  a.push_back(c);
  if (n == 0) {
    return b;
  }
  if (str == " ") {
    return b;
  } else {
    return a;
  }
}

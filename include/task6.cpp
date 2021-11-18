//
// Created by oleg on 18.11.2021.
//
//Copyright
#include <header.hpp>
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string) {
  std::string b = "";
  size_t pos = 0;
  b = str;
  while ((pos = str.find(old, pos)) != std::string::npos) {
    b.replace(pos, old.size(), new_string);
    pos += new_string.size();
  }
  return b;
  return 0;
}

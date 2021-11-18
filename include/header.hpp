// Copyright 2020 Your Name <your_email>
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <algorithm>
#include <limits>
#include <string>
#include <utility>
#include <vector>
float mean(const std::vector<float>&);
float argmax(const std::vector<float>&);
void sort(std::vector<float>&);
bool remove_first_negative_element(std::vector<int>& vec, int& removed_element);
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string);
std::vector<std::string> split(const std::string&, char sep);
std::string join(const std::vector<std::string>&, const std::string& sep);
std::pair<float, float> minMax(const std::vector<float>&);
#endif  // INCLUDE_HEADER_HPP_

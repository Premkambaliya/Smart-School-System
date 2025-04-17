#pragma once
#include <string>
#include <algorithm>

inline std::string toUpperCase(const std::string& str) {
    std::string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

#include <string>

std::string trim(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\n");
    size_t end = s.find_last_not_of(" \t\n");
    return (start == std::string::npos) ? "" : s.substr(start, end - start + 1);
}

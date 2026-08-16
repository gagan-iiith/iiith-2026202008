#include <string>
bool isStrongPassword(const std::string &pass) {
    return pass.length() >= 8;
}

bool passwordsMatch(const std::string &a, const std::string &b) {
    return a == b;
}

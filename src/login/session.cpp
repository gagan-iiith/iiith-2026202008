#include <string>
std::string generateSessionToken(const std::string &username) {
    return "session_" + username + "_token";
}

#include <string>
std::string generateSessionToken(const std::string &username) {
    return "session_" + username + "_token";
}

bool isSessionExpired(long issuedAt, long now, long ttlSeconds) {
    return (now - issuedAt) > ttlSeconds;
}

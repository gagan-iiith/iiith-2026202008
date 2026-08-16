#include <string>
std::string defaultAvatarUrl(const std::string &username) {
    return "/avatars/" + username + ".png";
}

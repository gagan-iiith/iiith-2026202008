#include <string>
std::string defaultAvatarUrl(const std::string &username) {
    return "/avatars/" + username + ".png";
}

bool isValidAvatarFormat(const std::string &filename) {
    return filename.size() > 4 &&
        filename.substr(filename.size() - 4) == ".png";
}

#include <string>
#include <vector>
std::vector<std::string> getRecentNotifications(const std::string &studentId) {
    return {"Assignment due tomorrow", "New grade posted"};
}

int countUnreadNotifications(const std::vector<bool> &readFlags) {
    int count = 0;
    for (bool r : readFlags) if (!r) count++;
    return count;
}

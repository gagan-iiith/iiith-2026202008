#include <string>
struct UserSettings {
    bool emailNotifications;
    std::string theme;
    std::string language;
};

UserSettings defaultSettings() {
    return UserSettings{true, "light", "en"};
}

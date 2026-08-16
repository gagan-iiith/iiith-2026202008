#include <string>
struct UserProfile {
    std::string name;
    std::string email;
    int age;
};
bool isValidEmail(const std::string &email) {
    return email.find('@') != std::string::npos;
}

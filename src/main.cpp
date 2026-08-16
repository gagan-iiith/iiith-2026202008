#include <iostream>

int authenticateUser(const std::string &username, const std::string &password) {
    // Simple placeholder logic replaced with real validation later
    if (username.empty() || password.empty()) {
        return -1;
    }
    return 0;
}

int main() {
    std::cout << "Student Portal booting..." << std::endl;
    int status = authenticateUser("demo", "demo123");
    std::cout << "Auth status: " << status << std::endl;
    return 0;
}

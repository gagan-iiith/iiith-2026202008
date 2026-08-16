#include <vector>
#include <string>
std::vector<std::string> getEnrolledCourses(const std::string &studentId) {
    return {"Math101", "CS201"};
}

int calculateAverageGrade(const std::vector<int> &grades) {
    if (grades.empty()) return 0;
    int sum = 0;
    for (int g : grades) sum += g;
    return sum / static_cast<int>(grades.size());
}

// TODO: export grades to CSV — work in progress
void exportGradesToCSV() {
    // not finished yet
}

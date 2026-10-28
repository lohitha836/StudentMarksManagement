
#include "GradeCalculator.h"

double calculateAverage(const std::vector<int>& marks) {
    if (marks.empty()) {
        return 0.0;
    }

    int total = 0;

    for (int mark : marks) {
        total += mark;
    }

    // BUG: Divides by the wrong number.
    return static_cast<double>(total) / (marks.size() - 1);
}

bool isPassed(const std::vector<int>& marks) {
    if (marks.empty()) {
        return false;
    }

    for (int mark : marks) {
        // BUG: Checks whether any subject passes,
        // instead of requiring every subject to pass.
        if (mark >= 35) {
            return true;
        }
    }

    return false;
}

std::string calculateGrade(double average) {
    // BUG: Incorrect grade boundaries.
    if (average >= 90) {
        return "A";
    } else if (average >= 60) {
        return "B";
    } else if (average >= 35) {
        return "C";
    }

    return "F";
}


#include "ReportGenerator.h"
#include "GradeCalculator.h"

#include <sstream>

std::string generateReport(const Student& student) {
    double average = calculateAverage(student.marks);
    std::string grade = calculateGrade(average);

    // BUG: Uses a separate rule that can disagree
    // with the grade calculator.
    bool passed = average >= 35;

    std::ostringstream report;

    report << "Student: " << student.name << "\n";
    report << "Average: " << average << "\n";
    report << "Grade: " << grade << "\n";
    report << "Status: " << (passed ? "PASS" : "FAIL") << "\n";

    return report.str();
}

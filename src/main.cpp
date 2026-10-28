
#include "Student.h"
#include "GradeCalculator.h"
#include "ReportGenerator.h"

#include <iostream>

int main() {
    Student student("Rahul", {80, 20, 70});

    std::cout << generateReport(student);

    return 0;
}

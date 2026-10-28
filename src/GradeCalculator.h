
#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <string>
#include <vector>

double calculateAverage(const std::vector<int>& marks);

bool isPassed(const std::vector<int>& marks);

std::string calculateGrade(double average);

#endif

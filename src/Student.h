
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
public:
    std::string name;
    std::vector<int> marks;

    Student(const std::string& studentName,
            const std::vector<int>& studentMarks);
};

#endif

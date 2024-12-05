#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Course {
public:
    std::string courseName;

    Course(const std::string& name) : courseName(name) {}
};

class Student {
public:
    std::string name;
    std::vector<Course> courses;

    Student(const std::string& studentName) : name(studentName) {}

    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    void displayCourses() const {
        std::cout << "Courses for " << name << ":\n";
        for (const auto& course : courses) {
            std::cout << "- " << course.courseName << "\n";
        }
    }
};

// Function to save students to a file
void saveStudents(const std::vector<Student>& students) {
    std::ofstream outFile("students.txt");
    for (const auto& student : students) {
        outFile << student.name << "\n";
        for (const auto& course : student.courses) {
            outFile << course.courseName << ",";
        }
        outFile << "\n"; // New line after each student
    }
    outFile.close();
}

// Function to load students from a file
std::vector<Student> loadStudents() {
    std::vector<Student> students;
    std::ifstream inFile("students.txt");
    std::string line;

    while (std::getline(inFile, line)) {
        std::string studentName = line;
        Student student(studentName);

        std::getline(inFile, line);
        size_t pos = 0;
        while ((pos = line.find(',')) != std::string::npos) {
            std::string courseName = line.substr(0, pos);
            student.addCourse(Course(courseName));
            line.erase(0, pos + 1);
        }

        students.push_back(student);
    }
    inFile.close();
    return students;
}

int main() {
    std::vector<Student> students;

    // Load existing students from file
    students = loadStudents();

    // Sample data entry
//    Student student1("Alice");
//    student1.addCourse(Course("Mathematics"));
//    student1.addCourse(Course("Physics"));
//
//    Student student2("Bob");
//    student2.addCourse(Course("Chemistry"));
//
//    students.push_back(student1);
//    students.push_back(student2);
//
//    // Save students to file
//    saveStudents(students);

    // Display all students and their courses
    for (const auto& student : students) {
        std::cout << "Student: " << student.name << "\n";
        student.displayCourses();
    }

    return 0;
}

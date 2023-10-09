#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    int studentID;
    std::string name;
    int age;
    char grade;
    double gpa;

public:
    // Parameterized constructor
    Student(int id, const std::string& n, int a, char g, double gpaValue)
        : studentID(id), name(n), age(a), grade(g), gpa(gpaValue) {}

    // Display student information
    void displayInfo() const {
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grade: " << grade << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }

    // Update student information
    void updateInfo(const std::string& n, int a, char g, double gpaValue) {
        name = n;
        age = a;
        grade = g;
        gpa = gpaValue;
    }

    // Calculate and display honor roll status
    void calculateHonorsStatus() const {
        if (gpa >= 3.5) {
            std::cout << name << " is on the honor roll." << std::endl;
        } else {
            std::cout << name << " is not on the honor roll." << std::endl;
        }
    }

    // Get student ID for searching
    int getStudentID() const {
        return studentID;
    }
};

int main() {
    std::vector<Student> students;

    while (true) {
        std::cout << "\nStudent Information System Menu:" << std::endl;
        std::cout << "1. Create a new student record" << std::endl;
        std::cout << "2. Display student information" << std::endl;
        std::cout << "3. Update student information" << std::endl;
        std::cout << "4. Calculate honor roll status" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id, age;
                std::string name;
                char grade;
                double gpa;

                std::cout << "Enter Student ID: ";
                std::cin >> id;
                std::cin.ignore();  // Clear newline character from the buffer

                std::cout << "Enter Name: ";
                std::cin.ignore();  // Clear newline character from the buffer
                std::getline(std::cin, name);

                std::cout << "Enter Age: ";
                std::cin >> age;

                std::cout << "Enter Grade: ";
                std::cin >> grade;

                std::cout << "Enter GPA: ";
                std::cin >> gpa;

                // Create a new student record and add it to the vector
                students.emplace_back(id, name, age, grade, gpa);
                std::cout << "Student record created successfully." << std::endl;
                break;
            }

            case 2: {
                if (students.empty()) {
                    std::cout << "No student records available." << std::endl;
                } else {
                    std::cout << "Enter Student ID to display information: ";
                    int id;
                    std::cin >> id;

                    bool found = false;
                    for (const auto& student : students) {
                        if (student.getStudentID() == id) {
                            student.displayInfo();
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        std::cout << "Student with ID " << id << " not found." << std::endl;
                    }
                }
                break;
            }

            case 3: {
                if (students.empty()) {
                    std::cout << "No student records available." << std::endl;
                } else {
                    std::cout << "Enter Student ID to update information: ";
                    int id;
                    std::cin >> id;

                    bool found = false;
                    for (auto& student : students) {
                        if (student.getStudentID() == id) {
                            std::string name;
                            int age;
                            char grade;
                            double gpa;

                            std::cout << "Enter Name: ";
                            std::cin.ignore();  // Clear newline character from the buffer
                            std::getline(std::cin, name);

                            std::cout << "Enter Age: ";
                            std::cin >> age;

                            std::cout << "Enter Grade: ";
                            std::cin >> grade;

                            std::cout << "Enter GPA: ";
                            std::cin >> gpa;

                            student.updateInfo(name, age, grade, gpa);
                            std::cout << "Student information updated successfully." << std::endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        std::cout << "Student with ID " << id << " not found." << std::endl;
                    }
                }
                break;
            }

            case 4: {
                if (students.empty()) {
                    std::cout << "No student records available." << std::endl;
                } else {
                    std::cout << "Enter Student ID to calculate honor roll status: ";
                    int id;
                    std::cin >> id;

                    bool found = false;
                    for (const auto& student : students) {
                        if (student.getStudentID() == id) {
                            student.calculateHonorsStatus();
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        std::cout << "Student with ID " << id << " not found." << std::endl;
                    }
                }
                break;
            }

            case 5: {
                std::cout << "Exiting the program." << std::endl;
                return 0;
            }

            default: {
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
                break;
            }
        }
    }

    return 0;
}

#pragma once
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <map>
#include <set>

class StudentDatabase {
// Write your solution here
    std::vector<std::string> Courses;
    std::map<std::string,int> Grades;
    std::set<std::string> Professors;
    std::unordered_map<std::string,int> Credits;

    public:
    //getters
    std::vector<std::string> getCourses(){  return Courses; };
    std::map<std::string, int> getGrades(){  return Grades; };
    std::set<std::string> getProfessors(){  return Professors; };
    std::unordered_map<std::string, int> getCredits(){  return Credits; };

    //display fun's
    void printCourses(){
        for(std::string& course : Courses) {
            std::cout << course << "\n";
        }
    };
    void printGrades(){
        for(const auto& pair : Grades) {
            std::cout << pair.first << ": " << pair.second << "\n";
        }
    };
    void printProfessors(){
        for(const std::string& professor : Professors) {
            std::cout << professor << "\n";
        }
    };
    void printCredits(){
        for(const auto& pair : Credits) {
            std::cout << pair.first << ": " << pair.second << "\n";
        }
    }

    //fun's to add
    void addCourse(const std::string& course, int credit); 
    void addGrade(const std::string& student, int grade); 
    void addProfessor(const std::string& name);
};

void StudentDatabase::addCourse(const std::string& course, int credit){
    Credits.insert({course,credit});
    Courses.push_back(course);
}

void StudentDatabase::addGrade(const std::string& student, int grade){
    Grades.insert({student,grade});
}

void StudentDatabase::addProfessor(const std::string& name){
    Professors.insert(name);
}

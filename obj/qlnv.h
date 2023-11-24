#pragma once
#include "employee.h"
#include "experience.h"
#include "fresher.h"
#include "intern.h"

class QLNV
{
private:
    std::vector<std::shared_ptr<Employee>> employeesList;

public:
    void findEmployee(const int& id);

    void addEmployee(std::shared_ptr<Employee> employee);

    void deleteEmployee(const int& id);

    // void editEmployee(const int& id, std::string& name, std::string& birthDay, std::string& phoneNum, std::string& email);

    void editEmployee(const int& id, const int& type);

    void displayInfo();

    void findExperiences() const;

    void findFreshers() const;

    void findInterns() const;

};
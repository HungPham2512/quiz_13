#include "employee.h"
#include "experience.h"
#include "fresher.h"
#include "intern.h"
#include "qlnv.h"
#include "certificate.h"
#include "exception.h"

int main() {
    QLNV employeeManager;

    // Tạo một số nhân viên và thêm vào danh sách
    auto expEmployee = std::make_shared<Experience>(1, "Nguyen Van A", "25/12/2001", "123456789", "nguyenvana@gmail.com", 5, "C++");
    auto fresherEmployee = std::make_shared<Fresher>(2, "Pham Thi B", "12/08/1995", "987654321", "phamthib@gmail.com", "22/08/2020", "A", "HUST");
    auto internEmployee = std::make_shared<Intern>(1, "Tran Van C", "03/03/2000", "456789123", "tranvanc@gmail.com", "IT", "Summer 2023", "FPTU");

    employeeManager.addEmployee(expEmployee);
    employeeManager.addEmployee(fresherEmployee);
    employeeManager.addEmployee(internEmployee);

    
    employeeManager.displayInfo();
    employeeManager.findExperiences();
    employeeManager.findFreshers();
    employeeManager.findInterns();

    
    employeeManager.findEmployee(2); 
    employeeManager.findEmployee(4); 

    
    employeeManager.editEmployee(1, 2); 
    employeeManager.editEmployee(2, 3); 
    //employeeManager.editEmployee(3, 2); 

    return 0;
}
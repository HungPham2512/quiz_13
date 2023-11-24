#pragma once
#include "certificate.h"

class Employee
{
private:
    int id;
    std::string eName;
    std::string eBirthDay;
    std::string ePhoneNum;
    std::string eEmail;
    int eType;
    int eCount;

    std::vector<std::shared_ptr<Certificate>> CertificateList;

public:
    Employee(int id, std::string eName, std::string eBirthDay, std::string ePhoneNum, std::string eEmail, int eType);

    ~Employee(){}

    virtual void showInfo() = 0;

    void addCertificate (std::shared_ptr<Certificate> cer);

    int getID() const;

    std::string getEName() const;

    std::string getEBirthDay() const;

    std::string getEPhoneNum() const;

    std::string getEEmail() const;

    int getEType() const;  

    void setEName(std::string& name);

    void setEBirthDay(std::string& birthDay);

    void setEPhoneNum(std::string& phoneNum);

    void setEEmail(std::string& email);

};
#include "exception.h"

    bool Exception::isValidName(const std::string& name) {
        return std::regex_match(name, std::regex("[A-Za-z ]+"));
    }

    bool Exception::isValidBirthDayFormat(const std::string& birthDay) {
        return std::regex_match(birthDay, std::regex(R"(\d{2}/\d{2}/\d{4})"));
    }

    bool Exception::isValidPhoneNumber(const std::string& phone) {
        return std::all_of(phone.begin(), phone.end(), ::isdigit);
    }

    bool Exception::isValidEmailFormat(const std::string& email) {
        return std::regex_match(email, std::regex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b)"));
    }

    void Exception::nameException(const std::string& name) {
        if (!isValidName(name)) {
            throw "Invalid Name Exception";
        }
    }

    void Exception::birthdayException(const std::string& birthDay) {
        if (!isValidBirthDayFormat(birthDay)) {
            throw "Invalid Birthday Format Exception";
        }
    }

    void Exception::phoneException(const std::string& phone) {
        if (!isValidPhoneNumber(phone)) {
            throw "Invalid Phone Number Exception";
        }
    }

    void Exception::mailException(const std::string& email) {
        if (!isValidEmailFormat(email)) {
            throw "Invalid Email Format Exception";
        }
    }



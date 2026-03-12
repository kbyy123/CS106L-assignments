#include "class.h"

BUPTStudent::BUPTStudent() {
    this->name = "Zeyang Lin";
}

BUPTStudent::BUPTStudent(const std::string& name, const std::string& buptID): name{name}, buptID{buptID}{};

bool BUPTStudent::isValidID() const {
    const std::string& ID = this->buptID;
    return ID.substr(0, 3) == "202" && ID.substr(4, 2) == "21";
}

std::string BUPTStudent::get_name() {
    return this->name;
}

std::string BUPTStudent::get_buptID() {
    return this->buptID;
}

void BUPTStudent::set_major(const std::string& new_major) {
    this->major = new_major;
}
#pragma once
#include <string>

class BUPTStudent {
  private:
    std::string name;
    std::string buptID;
    std::string major;

    bool isValidID() const;

  public:
    std::string get_name();
    std::string get_buptID();
    void set_major(const std::string& new_major);

    BUPTStudent();
    BUPTStudent(const std::string& name, const std::string& buptID);
};
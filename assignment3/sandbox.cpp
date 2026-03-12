/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */
#include "class.h"
#include <iostream>

void sandbox() {
  // STUDENT TODO: Construct an instance of your class!
  BUPTStudent stu{"Yuxiang Zhou", "2025210000"};
  stu.set_major("Computer Science");
  
  std::cout << stu.get_name() << std::endl;
  std::cout << stu.get_buptID() << std::endl;
}
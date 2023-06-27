#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <list>
#include <string.h>
#include <sstream>
#include <vector>
#include <cstdio>
#include <limits>

#include "utils.h"
#include "teacher.h"
#include "student.h"

using namespace std;
using namespace stn;
using namespace tch;

int main() {

    std::vector<std::string> person;
    person.push_back("./studentinventory.csv");
    person.push_back("./teacherinventory.csv");

    int x, user;

    std::cout << "Select one of the following options." << "\n"
    << "(1) I am a Student." << "\n"
    << "(2) I am a Teacher." << "\n"
    << "(3) Exit." << "\n"
    << std::endl;

    int numA = 1, numB = 3;
    user = getValidInput(numA, numB);

    switch (user) {
      case 1:
        while (1) {
        int option;
        std::cout << "Please select one of the following actions." << "\n"
             << "(1) Take a book." << "\n"
             << "(2) Return a book." << "\n"
             << "(3) See my inventory." << "\n"
             << "(4) Available books." << "\n"
             << "(5) Exit." << "\n"
             << std::endl;
        int numA = 1, numB = 5;
        option = getValidInput(numA, numB);

        stn::Student first_student;
        
          switch (option) {
            case 1:
              first_student.takeBook(person[0]);
              break;
            case 2:
              first_student.submitBook(person[0]);
              break;
            case 3:
              first_student.displayMyBooks(person[0]);
              break;
            case 4:
              first_student.displayLibraryBooks();
              break;
            case 5:
              std::cout << "Exiting..." << std::endl;
              return 0;
          }
        }

      case 2:
        while (1) {
        int option;
        std::cout << "Please select one of the following actions." << "\n"
             << "(1) Take a book." << "\n"
             << "(2) Return a book." << "\n"
             << "(3) See my inventory." << "\n"
             << "(4) Available books." << "\n"
             << "(5) Remove book from library." << "\n"
             << "(6) Exit." << "\n"
             << std::endl;

        int numA = 1, numB = 6;
        option = getValidInput(numA, numB);

        tch::Teacher the_teacher;
        
          switch (option) {
            case 1:
              the_teacher.takeBook(person[1]);
              break;
            case 2:
              the_teacher.submitBook(person[1]);
              break;
            case 3:
              the_teacher.displayMyBooks(person[1]);
              break;
            case 4:
              the_teacher.displayLibraryBooks();
              break;
            case 5:
              the_teacher.del_book(person[1]);
              break;
            case 6:
              std::cout << "Exiting..." << std::endl;
              return 0;
          }
        }

      case 3:
        std::cout << "Exiting..." << std::endl;
        return 0;
    }

      return 0;
    }

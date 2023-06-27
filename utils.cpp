#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <vector>
#include <cstdio>
#include <limits>
#include "utils.h"

int getValidInput(int numA, int numB) {
  int option;

  while (true) {
    std::cout << "Enter your option: ";
    std::cin >> option;
    if(!(option >= numA && option <= numB)){
      std::cout << "Invalid input. Please enter a valid option." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
    }
    else {
      break;
    }
  }

  return option;
}


void addBook(std::string &whichuser, bool bvar){
    int found;
    std::string row, targetbook, extractedstring;
    std::cout << "Enter the name you want to take." << std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, targetbook);

    std::fstream fin; std::fstream fout, sout;
    fin.open("./booklist.csv", std::ios::in);
    fout.open("./temp.csv", std::ios::out | std::ios::app);
    sout.open(whichuser, std::ios::out | std::ios::app);

    while (std::getline(fin, row)){

            found = row.find(",");
            extractedstring = row.substr(0, found); // this is the value in the first column

            if (extractedstring == targetbook) {
            if (bvar){
            }
            else{
                sout << row << "\n";
            }     
            } else{
                fout << row << "\n";
            }
        }

        int rename_res, remove_res;

        remove_res = remove("booklist.csv");
        rename_res = rename("temp.csv","booklist.csv");

        fin.close();
        fout.close();
        sout.close();
}


void takeOutBook(std::string &whichuser){
    int found;
    std::string booktitle, extractedstring, row;
    std::cout << "Enter the title of the book you want to submit." << std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, booktitle);

    std::fstream fout, sout, fin;
    fout.open("./booklist.csv", std::ios::out | std::ios::app);
    sout.open("./temp.csv", std::ios::out | std::ios::app);
    fin.open(whichuser, std::ios::in);

    while (std::getline(fin, row)){        
            found = row.find(",");
            extractedstring = row.substr(0, found); // this is the value in the first column

            if (extractedstring == booktitle) {
            fout << row << "\n";
            } else{
                sout << row << "\n";
            }
    }

    int rename_res, remove_res;

    remove_res = remove(whichuser.c_str());
    rename_res = rename("temp.csv",whichuser.c_str());

    fout.close();
    sout.close();
    fin.close();
}


void view_displayMyBooks(std::string &str){
    std::string row;

    std::fstream fin;
    fin.open(str, std::ios::in);

    while (std::getline(fin, row)){
        std::cout << row << "\n";
        }
    std::cout << "\n";

    fin.close();
}


void libraryBooks(){
    std::string row;

    std::fstream fin; std::fstream fout;
    fin.open("./booklist.csv", std::ios::in);

    while (std::getline(fin, row)){
        std::cout << row << "\n";
        }
    std::cout << "\n";

    fin.close();
}
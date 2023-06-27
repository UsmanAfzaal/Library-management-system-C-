#include "student.h"
#include "utils.h"
#include <iostream>

using namespace stn;

void Student::takeBook(std::string &whichuser){
                bool del = false;
                addBook(whichuser, del);
            };
void Student::submitBook(std::string &whichuser){
                takeOutBook(whichuser);
            };
void Student::displayMyBooks(std::string &whichuser){
                view_displayMyBooks(whichuser);
            };
void Student::displayLibraryBooks(){
                libraryBooks();
            };
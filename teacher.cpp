#include "teacher.h"
#include "utils.h"
#include <iostream>

using namespace tch;

void Teacher::takeBook(std::string &str1){
                bool del = false;
                addBook(str1, del);
            };
void Teacher::submitBook(std::string &str1){
                takeOutBook(str1);
            };
void Teacher::displayMyBooks(std::string &str1){
                view_displayMyBooks(str1);
            };
void Teacher::displayLibraryBooks(){
                libraryBooks();
            };
void Teacher::del_book(std::string &str1){
                bool del = true;
                addBook(str1, del);
            };
#include <string>

namespace tch
{
    class Teacher
        {
        public:
            void takeBook(std::string &str1);
            void submitBook(std::string &str1);
            void displayMyBooks(std::string &str1);
            void displayLibraryBooks();
            void del_book(std::string &str1);
        };
}
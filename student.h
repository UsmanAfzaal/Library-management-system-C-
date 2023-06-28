#include <string>

namespace stn
{
    class Student
        {
            public:
                void takeBook(std::string &whichuser);
                void submitBook(std::string &whichuser);
                void displayMyBooks(std::string &whichuser);
                void displayLibraryBooks();
        };

}

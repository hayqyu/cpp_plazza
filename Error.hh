#ifndef ERROR_HH
#define ERROR_HH

#include <string>

class Error : public std::exception
{
public:
    Error(std::string const &, std::string const & = "Error");
    ~Error() throw();
    const char            *errorName() const throw();
    virtual const char    *what() const throw();
private:
    std::string           _message;
    std::string           _name;
};


#endif // ERROR_H

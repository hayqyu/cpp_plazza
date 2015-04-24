#ifndef ERROR_HH
# define ERROR_HH

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

class ArgError : public Error
{
public:
	ArgError(std::string const &message, std::string const &name = "ArgError");
};

class ThreadError : public Error
{
public:
	ThreadError(std::string const &message, std::string const &name = "ThreadError");
};

#endif // ERROR_H

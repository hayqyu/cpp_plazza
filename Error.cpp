#include "Error.hh"

Error::Error(std::string const &message, std::string const &name)
    :   _message(message),
        _name(name)
{
}

Error::~Error() throw()
{
}

const char  *Error::errorName() const throw()
{
    return (_name.c_str());
}

const char  *Error::what() const throw()
{
    return (_message.c_str());
}
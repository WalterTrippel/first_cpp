#ifndef AGEEXCEPTION_H
#define AGEEXCEPTION_H

#include <exception>

class AgeException : public std::exception
{
    virtual const char * what() const throw()
    {
        return "Do you think you are a Noah?";
    }
};

#endif // AGEEXCEPTION_H

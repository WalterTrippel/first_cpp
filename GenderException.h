#ifndef GENDEREXCEPTION_H
#define GENDEREXCEPTION_H

#include <exception>

class GenderException : public std::exception
{
    virtual const char * what() const throw()
    {
        return "Humanus oculus non";
    }
};

#endif // GENDEREXCEPTION_H

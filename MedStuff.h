#ifndef MEDSTUFF_H
#define MEDSTUFF_H

#include "Patient.h"

class MedStuff
{
public:
    int y_years_of_practice;

    explicit MedStuff(int year_of_practice):y_years_of_practice(year_of_practice){}
    MedStuff():MedStuff(1){}

    virtual void diagnose(Patient & patient) = 0;
};

#endif // MEDSTUFF_H

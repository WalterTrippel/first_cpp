#include "Therapist.h"


Therapist::Therapist(const Therapist &obj)
{
    this->y_years_of_practice = obj.y_years_of_practice;
}

Therapist::Therapist(Therapist &&other)
{
    this->y_years_of_practice = other.y_years_of_practice;
    other.y_years_of_practice = 0;
}

Therapist & Therapist::operator =(const Therapist & other)
{
    if(this != &other)
    {
        y_years_of_practice = other.y_years_of_practice;
    }
    return * this;
}

void Therapist::diagnose(Patient & patient)
{
    if(!patient.isDirected)
    {
        switch(patient.getGender())
        {
        case 'w':
            if(patient.getAge() > 14)
            {
                Gynecologist(2).diagnose(patient);
            } else {
                /**
                    I think its enough to organize correctly one example of med stuff derivative
                    cause others gonna be almost the same
                */
            }; break;
        case 'm': /** The same, except gynecologist ) */ ; break;
        default: throw GenderException(); break;
        }
    }
}

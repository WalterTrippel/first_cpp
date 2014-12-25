#include "Gynecologist.h"
#include <cstdlib>

Gynecologist::Gynecologist(const Gynecologist &obj)
{
    y_years_of_practice = obj.y_years_of_practice;
}

Gynecologist::Gynecologist(Gynecologist &&other)
{
    y_years_of_practice = other.y_years_of_practice;
    other.y_years_of_practice = 0;
}

Gynecologist & Gynecologist::operator =(const Gynecologist & other)
{
    if(this != &other){
        y_years_of_practice = other.y_years_of_practice;
    }
    return *this;
}

/**
    I made too simple 'engine', I mean that it is totally randomized
*/
void Gynecologist::diagnose(Patient &patient){
    std::cout << sizeof(possible_illnesses) / sizeof(possible_illnesses[0]);
    patient.setDiagnose(possible_illnesses[ (int) (static_cast <float>(y_years_of_practice * rand()) /
    (static_cast <float> (RAND_MAX / (sizeof(possible_illnesses) / sizeof(possible_illnesses[0])))))
            % (sizeof(possible_illnesses) / sizeof(possible_illnesses[0]))]);
}

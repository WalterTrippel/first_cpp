#ifndef THERAPIST_H
#define THERAPIST_H

#include "MedStuff.h"
#include "Patient.h"
#include "Gynecologist.h"
#include "GenderException.h"

class Therapist : MedStuff
{
private:
    Therapist & operator=(const Therapist & other);
    void direction();
    std::string possible_illnesses[4] = {"gynecology problems", "dentist problems", "common flu", "stomach problems"};

public:
    Therapist(const Therapist & obj);
    Therapist(Therapist&& other);

    void diagnose(Patient & patient);
    using MedStuff::MedStuff;
};

#endif // THERAPIST_H

#ifndef GYNECOLOGIST_H
#define GYNECOLOGIST_H

#include "MedStuff.h"
#include "Patient.h"

class Gynecologist : MedStuff{
private:
    Gynecologist & operator =(const Gynecologist & other);
    const std::string possible_illnesses[3] = {"everything is ok", "Pelvic Pain", "Vulvodynia"};

public:
    using MedStuff::MedStuff;
    Gynecologist(const Gynecologist & obj);
    Gynecologist(Gynecologist && other);

    void diagnose(Patient & patient);
};

#endif // GYNECOLOGIST_H

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>
#include "AgeException.h"
#include "assert.h"

class Patient {
private:
    int age;
    std::string ache;
    std::string diagnose;
    char gender;

    Patient & operator =(const Patient & other);
    friend std::ostream & operator <<(std::ostream &output, const Patient & obj);

public:
    Patient(int age_, std::string ache_, char gender_):age(age_), ache(ache_), gender(gender_)
    {
        /*if(age < 0 || age > 120){
            throw AgeException();
        }*/
        assert(age < 121); // suppose assertion is better in this case (checking initials)
    }
    Patient(const Patient & obj);
    Patient(Patient && other);
    Patient():Patient(18, "toothache", 'm'){}

    ~Patient();

    int getAge();
    std::string getAche();
    char getGender();
    std::string getDiagnose();
    void setDiagnose(const std::string & str);

    bool isDirected = false;
};

#endif // PATIENT_H

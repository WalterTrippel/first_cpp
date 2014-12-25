#include "Patient.h"

Patient::Patient(const Patient &obj)
{
    this->age = obj.age;
    this->ache = obj.ache;
    this->gender = obj.gender;
}

Patient::Patient(Patient &&other)
{
    this->age = other.age;
    this->ache = other.ache;
    this->gender = other.gender;

    other.age = 0;
    other.ache = nullptr;
    other.gender = 0;
}

Patient::~Patient()
{
    //Is it necessary to free anything in my case?
}

Patient & Patient::operator =(const Patient & other)
{
    if(this != &other)
    {
        age = other.age;
        ache = other.ache;
        gender = other.gender;
    }
    return * this;
}

int Patient::getAge(){
    return age;
}

std::string Patient::getAche(){
    return ache;
}

char Patient::getGender(){
    return gender;
}

std::string Patient::getDiagnose(){
    return diagnose;
}

void Patient::setDiagnose(const std::string &str){
    this->diagnose = str;
}

std::ostream & operator <<(std::ostream &output, const Patient & obj){
    output << "Age :\t" << obj.age << "\nGender :\t" << obj.gender << "\nAche :\t"
                 << obj.ache.c_str()<< "\nDiagnose :\t" << obj.diagnose << "\n\n";
    return output;
}

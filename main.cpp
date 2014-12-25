#include <iostream>
#include "Patient.h"
#include "Therapist.h"
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    //Patient patient(145, "assache", 'n'); //exception test
    Patient patient(119, "earache", 'w');
    Therapist therapist(2);
    therapist.diagnose(patient);
    cout << patient << "\n";
    return 0;
}


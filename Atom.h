#ifndef LAB5_TEST_ATOM_H
#define LAB5_TEST_ATOM_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

enum atom_type{
    ISOTYPE,
    RADIOACTIVE,
    ION,
    ANTIMATTER,
    STABLE
};

class Atom {
private:
    int name;
    int neutrons_number;
public:
    float atomic_mass_unit;
    int protons_number;
    int electrons_number;

    Atom(int name, float mass, int neutrons_number, int protons_number, int electrons_number);
    Atom();
    ~Atom();

    int getName();
    int getMass ();
};


#endif //LAB5_TEST_ATOM_H

#ifndef UNTITLED11_ATOM_H
#define UNTITLED11_ATOM_H


#endif //UNTITLED11_ATOM_H

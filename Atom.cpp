#include "Atom.h"

Atom::Atom(int name, float mass, int neutrons_number, int protons_number, int electrons_number) {
    this -> name=name;
    this -> atomic_mass_unit=mass;
    this -> neutrons_number=neutrons_number;
    this -> protons_number=protons_number;
    this -> electrons_number=electrons_number;
}

Atom::Atom() {
    this -> name = 0;
    this -> atomic_mass_unit = 0;
    this -> neutrons_number = 0;
    this -> protons_number = 0;
    this -> electrons_number = 0;
}

Atom::~Atom() {
//    cout << "destructor" << endl;
}

int Atom::getMass() {
    return atomic_mass_unit;
}

int Atom::getName() {
    return name;
}
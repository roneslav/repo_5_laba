#include "Molecule.h"

Molecule::Molecule(Atom atom) {
    this->atom=atom;
}

Molecule::Molecule(vector<Atom> someAtoms) {
    this->someAtoms = someAtoms;
}

Molecule::~Molecule() {
    //cout << "destructor" << endl;
}

bool Molecule::isNeutral(Atom atom) {
    return atom.protons_number == atom.electrons_number;
}

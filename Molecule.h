#ifndef LAB5_TEST_MOLECULE_H
#define LAB5_TEST_MOLECULE_H

#include "Atom.h"


class Molecule {
private:
    vector<Atom> someAtoms;
public:
    Molecule(vector<Atom> someAtoms);
    Molecule(Atom atom);
    ~Molecule();
    bool isNeutral(Atom atom);

    Atom atom;
};


#endif //LAB5_TEST_MOLECULE_H

#ifndef UNTITLED11_MOLECULE_H
#define UNTITLED11_MOLECULE_H

#endif //UNTITLED11_MOLECULE_H

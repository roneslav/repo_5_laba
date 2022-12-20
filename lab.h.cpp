#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

enum atom{
    ISOTYPE,
    RADIOACTIVE,
    ION,
    ANTIMATTER,
    STABLE
};

class Atom{
private:
    int name;
    float atomic_mass_unit;
    int neutrons_number;
public:
    int protons_number;
    int electrons_number;

    Atom(int name, float mass, int neutrons_number, int protons_number, int electrons_number)
    {
        this -> name=name;
        this -> atomic_mass_unit=mass;
        this -> neutrons_number=neutrons_number;
        this -> protons_number=protons_number;
        this -> electrons_number=electrons_number;
    }

    Atom() {
        name=0;
        atomic_mass_unit=0.0;
        neutrons_number=0;
        protons_number=0;
        electrons_number=0;
    }

    int getName(){
        return name;
    }

    int getMass () {
        return atomic_mass_unit;
    }

    ~Atom(){
        //cout << "destructor" << endl;
    };

};

class Molecule{
private:
    vector<Atom> someAtoms;
public:
    Molecule(vector<Atom> someAtoms){
        this -> someAtoms = someAtoms;
    };
    Atom atom;
    Molecule(Atom atom){
        this->atom=atom;
    }
    bool isNeutral(Atom atom){
        return atom.protons_number == atom.electrons_number;
    }
    ~Molecule(){
        //cout << "destructor" << endl;
    };

};

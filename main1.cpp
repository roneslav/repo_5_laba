#include "Molecule.h"

void massSort (vector<Atom> *someAtoms) {
    sort(someAtoms->begin(), someAtoms->end(), [](Atom &atom1, Atom &atom2) {
        return atom1.getMass() < atom2.getMass();
    });
}
void print (vector<Atom> someAtoms) {
    for (int i = 0; i < someAtoms.size(); i++)
    {
        cout << someAtoms[i].getMass() << "\t"<< someAtoms[i].getName() << endl;
    }
    cout << endl;
}
float massAverage(vector<Atom> someAtoms) {
    int sum=0;
    float average;
    for( auto a : someAtoms){
        sum+=a.atomic_mass_unit;
    }
    average= sum/ someAtoms.size();
    return average;
}

int main() {
    Atom hydrogen(ISOTYPE, 1, 0, 1, 0);
    Atom oxygen(ION, 14, 8, 8, 8);
    Atom heliy(RADIOACTIVE, 4, 2, 4, 1);
    Atom bor(ANTIMATTER, 10, 6, 6, 5);
    Atom neon(STABLE, 20, 7, 3, 5);
    vector<Atom> someAtoms {hydrogen, oxygen, heliy, bor, neon};
    massSort(&someAtoms);
    print(someAtoms);
<<<<<<< HEAD
    massAverage(someAtoms);
=======
>>>>>>> 415449673386b67c5b3cef752338ad04797f65c9

    cout<<"\n"<< "Average mass of atoms is"<<"\t"<< massAverage(someAtoms);

    Molecule mol1(hydrogen);
    cout<<"\n"<<"hydrogen"<<mol1.isNeutral(hydrogen);
    Molecule mol2(oxygen);
    cout<<"\n"<<"oxygen"<<mol2.isNeutral(oxygen);
    Molecule mol3(heliy);
    cout<<"\n"<<"heliy"<<mol3.isNeutral(heliy);
    Molecule mol4(bor);
    cout<<"\n"<<"bor"<<mol4.isNeutral(bor);
    Molecule mol5(neon);
    cout<<"\n"<<"neon"<<mol5.isNeutral(neon);

    return 0;
}

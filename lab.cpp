#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
#include "lab.h"
using namespace std;


void massSort (vector<Atom> *someAtoms) {
    sort(someAtoms->begin(), someAtoms->end(), [](Atom &e1, Atom &e2) {
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
void massAverage(vector<Atom> someAtoms) {
}
//
// Created by Rostik on 23.11.2022.
//

#include "lab.h"

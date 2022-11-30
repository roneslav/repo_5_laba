#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
#include "lab.h"
using namespace std;


void massSort (vector<Atom> *someAtom) {
    sort(someAtom->begin(), someAtom->end(), [](Atom &e1, Atom &e2) {
        return e1.getMass() < e2.getMass();
    });
}
void print (vector<Atom> someAtom) {
    for (int i = 0; i < someAtom.size(); i++)
    {
        cout << someAtom[i].getMass() << "\t"<< someAtom[i].getName() << endl;
    }
    cout << endl;
}
void massAverage(vector<Atom> someAtom) {
}
//
// Created by Rostik on 23.11.2022.
//

#include "lab.h"

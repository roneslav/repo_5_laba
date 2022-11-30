#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
#include "lab.h"
#include "lab.cpp"
using namespace std;

int main(void) {
    Atom hydrogen(ISOTYPE, 1, 0, 1, 0);
    Atom oxygen(ION, 14, 8, 8, 8);
    Atom heliy(RADIOACTIVE, 4, 2, 4, 1);
    Atom bor(ANTIMATTER, 10, 6, 6, 5);
    Atom neon(STABLE, 20, 7, 3, 5);
    vector<Atom> someAtom {hydrogen, oxygen, heliy, bor, neon};
    massSort(&someAtom);
    print(someAtom);

    int arr[]={1,14,4,10,20};
    int sum=0, n=5;
    float average=0;
    for(int j=0; j<n; j++ )
        sum+=arr[j];
    cout<<"The sum of mass's atoms is"<<"\t"<< sum;
    average=sum/n;
    cout<<"\n"<< "Average mass of atoms is"<<"\t"<< average;

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

}

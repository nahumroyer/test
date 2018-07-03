#include <iostream>
#include <stdio.h>
#include <sstream>
#include "classes.h"
using namespace std;

int main()
{
    classes csnr;
    int age;
    int ageTotal = 0;
    int numPeopleEntered = 0;

    cout << "Enter first age or -1 to quit: " << endl;
    cin >> age;

    while (age != -1) {
        ageTotal = ageTotal + age;
        numPeopleEntered++;
        cout << "Enter next age or -1 to quit." << endl;
        cin >> age;
    }

    cout << "Number of People Entered: " << numPeopleEntered << endl;
    cout << "Average Age: " << ageTotal/numPeopleEntered << endl;
    return 0;
}

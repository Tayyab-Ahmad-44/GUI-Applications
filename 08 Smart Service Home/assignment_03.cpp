#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
    Home h1;

    h1.newUser();
    cout << endl;
    h1.newUser();
    cout << endl;
    h1.newUser();
    cout << endl;

    h1.carParking();
    h1.carParking();
    h1.carParking();
    cout << endl;

    h1.carLocation();
    h1.takingCarOut();
    h1.takingCarOut();
    h1.carLocation();
    h1.carParking();

    cout << endl;

    h1.userDetails();

    return 0;
}

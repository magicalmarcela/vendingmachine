/***Marcela Echavarria
**4-19-17
**header for Snack class***/

#include<iostream>
#include <string>
using namespace std;

#ifndef SNACK_H

#define SNACK_H


//Snack class declaration
class Snack

{

private:

     string name;

     double price;

     int numCalories;

public:

     Snack(string snackName, double snackPrice, int snackCalories);

     Snack();

     string  getName();

     double getPrice();

     int getNumCalories();

};

#endif

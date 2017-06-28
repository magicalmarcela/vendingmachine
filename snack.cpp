/***Marcela Echavarria
**4-19-17
**Snack class that returns the name of a snack, price of a snack, and number of
**calories in snack*/

#include <iostream>
#include <string>
#include "Snack.hpp"

using namespace std;

//constructor to initialize variables
Snack::Snack(string snackName, double snackPrice, int snackCalories)

{

     name = snackName;

     price = snackPrice;

     numCalories = snackCalories;

}


//default constructor
Snack::Snack()

{
     name = "bottled water";

     price = 1.75;

     numCalories = 0;

}

//get method for each data member

string Snack::getName()

{

     return name;

}

double Snack::getPrice()

{

     return price;

}

int Snack::getNumCalories()

{

     return numCalories;

}

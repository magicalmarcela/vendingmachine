/***Marcela Echavarrias
**4-19-17
**A Class that returns the amount of money in the machine, the monetary
**value of the snacks in the machine, the number of empty slots in the machine,
**and updates these values after snacks are purchased**/

#include <iostream>

#include <cmath>

#include "MiniVend.hpp"

using namespace std;


//constructor with 5 parameters
MiniVend::MiniVend(VendSlot vend0, VendSlot vend1, VendSlot vend2, VendSlot vend3, double amount)

{

     vs0 = vend0;

     vs1 = vend1;

     vs2 = vend2;

     vs3 = vend3;

     money = amount;
}




//amount of money in machine
double MiniVend::getMoney()

{
return money;
}




//returns total number of empty slots in machine
int MiniVend::numEmptySlots ()

{
int slotAmount0 = vs0.getSnackAmount();
int slotAmount1 = vs1.getSnackAmount();
int slotAmount2 = vs2.getSnackAmount();
int slotAmount3 = vs3.getSnackAmount();

int empty = 0;

  if (slotAmount0 == 0)
     {
      empty++;
     }

  if (slotAmount1 == 0)
     {
      empty++;
     }

  if (slotAmount2 == 0)
     {
      empty++;
     }

  if (slotAmount3 == 0)
      {
       empty++;
      }

return empty;

}



//total monetary value of snacks left in machine
double MiniVend::valueOfSnacks ()
{
int totalsnacks0 = vs0.getSnackAmount();
double totalsnackprice0 = vs0.getSnack().getPrice();

int totalsnacks1 = vs1.getSnackAmount();
double totalsnackprice1 = vs1.getSnack().getPrice();

int totalsnacks2 = vs2.getSnackAmount();
double totalsnackprice2 = vs2.getSnack().getPrice();

int totalsnacks3 = vs3.getSnackAmount();
double totalsnackprice3 = vs3.getSnack().getPrice();

double sum = 0;
sum += totalsnacks0 * totalsnackprice0;
sum += totalsnacks1 * totalsnackprice1;
sum += totalsnacks2 * totalsnackprice2;
sum += totalsnacks3 * totalsnackprice3;

return sum;

}




//method to update money in machine and decrease number of snacks in slots after purchase
void MiniVend::buySnack (int position)

{
if (position == 0)
  {
  if (vs0.getSnackAmount()==0)

  {}
else  {  vs0.decrementAmount();
  money = money + vs0.getSnack().getPrice();}
  }

else if (position == 1)
    {
    if (vs1.getSnackAmount()==0)

    {}
     else
        {
            vs1.decrementAmount();
            money = money + vs1.getSnack().getPrice();
        }
    }



    else if (position == 2)
      {
      if (vs2.getSnackAmount()==0)

      {}
        else
          {
              vs2.decrementAmount();
              money = money + vs2.getSnack().getPrice();
          }

      }



    else  if (position == 3)
        {
        if (vs3.getSnackAmount()==0)

        {}
          else
            {
                vs3.decrementAmount();
                money = money + vs3.getSnack().getPrice();
            }
        }


}

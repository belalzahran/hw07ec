/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 7/6/2021
*******************************************************************************/

#include <iostream>
#include "ManageInventory.h"
using namespace std;


/*******************************************************************************
* hw07ec - Dynamic Memory
*-------------------------------------------------------------------------------
* This program
*-------------------------------------------------------------------------------*/
int main()
{


    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #7ec      : Dynamic Memory \n";
    cout << "*****************************************\n\n";

    ManageInventory bob{2};


    bob.addItem("Shoes", 30, 20.99);
    bob.addItem("Sunglasses", 25, 19.99);



    bob.PrintInventory();



    return 0;
}

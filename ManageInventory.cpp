#include "ManageInventory.h"




ManageInventory::ManageInventory()
: count{0}, p__pInventoryItems{new Item *[size]}
{

}

ManageInventory::ManageInventory(int size)
: size{size}, count{0}, p__pInventoryItems{new Item *[size]}
{

}

ManageInventory::~ManageInventory()
{
    for (int i = 0; i < count; i++)
    {
        delete [] p__pInventoryItems[i];
    }
    delete [] p__pInventoryItems;
}





void ManageInventory::addItem(string name, int quantity, float cost)
{
    Item *x = new Item;

    x->name = name;
    x->quantity = quantity;
    x->cost = cost;

    p__pInventoryItems[count] = x;
    count++;
}

void ManageInventory::PrintInventory() const
{
    for (int i = 0; i < count; i++)
    {
        cout << p__pInventoryItems[i]->name << endl;
        cout << p__pInventoryItems[i]->quantity << endl;
        cout << p__pInventoryItems[i]->cost << endl;
    }

}
#include "MaterialProduct.h"
#include <iostream>

MaterialProduct::MaterialProduct(string name, double price, int quantity, double weightPerUnit)
	:Product(name, price, quantity), weightPerUnit(weightPerUnit)
{
	cout << "MaterialProduct created: " << name << endl;
}

MaterialProduct::~MaterialProduct()
{
	cout << "MaterialProduct destroyed: " << name << endl;
}

double MaterialProduct::getTotalValue() const
{
    return price * quantity;
}

double MaterialProduct::getTotalWeight() const
{
    return weightPerUnit * quantity;
}

void MaterialProduct::displayInfo() const
{
    cout << "[Material] " << name
        << " | Weight/unit: " << weightPerUnit << "kg"
        << " | Total weight: " << getTotalWeight() << "kg"
        << " | Price: " << price
        << " | Qty: " << quantity
        << " | Total value: " << getTotalValue() << endl;
}
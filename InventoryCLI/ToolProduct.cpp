#include "ToolProduct.h"
#include <iostream>

ToolProduct::ToolProduct(string name, double price, int quantity, string material, int warrantyMonths)
	:Product(name, price, quantity), material(material), warrantyMonths(warrantyMonths)
{
	cout << "ToolProduct created: " << name << endl;
}

ToolProduct::~ToolProduct()
{
	cout << "ToolProduct destroyed: " << name << endl;
}

double ToolProduct::getTotalValue() const
{
	return price * quantity;
}

void ToolProduct::displayInfo() const
{
	cout << "[Tool] " << name
		<< " | Material: " << material
		<< " | Warranty: " << warrantyMonths << " months"
		<< " | Price: " << price
		<< " | Qty: " << quantity
		<< " | Total value: " << getTotalValue() << endl;
}
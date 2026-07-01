#include "Product.h"
#include <iostream>

int Product::totalProductsCreated = 0; // static definition

Product::Product(string name, double price, int quantity)
	:name(name), price(price), quantity(quantity)
{
	totalProductsCreated++;
	cout << "Product created: " << name << endl;
}

Product::~Product()
{
	cout << "Product destroyed: " << name << endl;
}

string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }

void Product::setQuantity(int newQuantity)
{
	if (newQuantity<0)
	{
		cout << "Error: Quantity cannot be negative." << endl;
	}

	quantity = newQuantity;
}

int Product::getTotalProductsCreated()
{
	return totalProductsCreated;
}